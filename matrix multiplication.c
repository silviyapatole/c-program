# include <stdio.h>
  int main()
{
	int c,r,k,m[10][10],i,j,a[10][10],b[10][10];
	
	printf("enter the row-");
	scanf("%d",&r);

	printf("enter the column-");
	scanf("%d",&c);
	
	printf("enter elements of 1st matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("enter elements of 2nd matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		
	//logic to multiply
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			m[i][j]=0;
			for(k=0;k<c;k++)
			{
				m[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	
	//logic to display
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
}
