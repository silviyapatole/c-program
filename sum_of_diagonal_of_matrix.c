# include <stdio.h>
  int main()
{
	int c,r,i,j,a[10][10],sum=0;
	
	printf("enter the row-");
	scanf("%d",&r);

	printf("enter the column-");
	scanf("%d",&c);
	
	printf("enter elements matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("entered matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	
	//logic to add diagonal
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i == j){
				sum+=a[i][j];
			}
		}
	}
	
	printf("\nsum of the diagonal is = %d",sum);
}
