#include <stdio.h>
  int main()
{
	int i,j,a[2][3],r,c;
//	accepting value in 2nd array using loop;
	printf("Enter number of rows:");
	scanf("%d",&r);
	printf("Enter number of col:");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		
		{
			scanf("%d",&a[i][j]);
		}
	}
//	print values in 2nd array using loop;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		printf("%d \t",a[i][j]);
	    }
	    printf("\n");
	}
}
