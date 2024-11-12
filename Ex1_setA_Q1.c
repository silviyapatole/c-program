#include<stdio.h>
int main()
{
	int x,n,flag=0,pos,i,arr[10];
	
	printf("enter the array-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the value to search-");
	scanf("%d",&x);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("the element is at pos %d",i);
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("the element is not present in the array");
	}
}
