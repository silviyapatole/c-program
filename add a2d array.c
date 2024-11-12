#include <stdio.h>
  int main()
{
	int i,j,r,a[10][10],b[10][10],c[10][10];
	
	printf("enter row and column-");
	scanf("%d",&r);
	
	printf("enter element for 1st matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
	
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("\n enter element for 2nd matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	//add
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	//display
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d \t",c[i][j]);
		}
		printf("\n");
	}
}
