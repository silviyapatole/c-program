#include <stdio.h>
  int main()
{
	int n,m,a[10],b[10],c[20],i,j,k=0;
	
	printf("enter the first element-");
	scanf("%d",&n);
	
	printf("enter the second element-");
	scanf("%d",&m);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		c[k++]=a[i];
	}
	printf("enter the second element-");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
		c[k++]=b[i];
	}
	printf("the mereged array is");
	for(i=0;i<k;i++)
	{
		printf("%d",c[i]);
	}
}
