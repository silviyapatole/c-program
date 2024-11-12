#include <stdio.h>
  int main()
{
	int n,arr[10],sum=0,i;
	
	printf("enter the element-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	printf("total sum=%d",sum);
}
