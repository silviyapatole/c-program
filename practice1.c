#include<stdio.h>
int main()
{
	int arr[]={1,2,3,4};
	int res[4],i,j,sum=0;
	
	res[0]=arr[0];
	j=0;
	
	for(i=1;i<4;i++)
	{
		sum=arr[i]+res[i-1];
		res[++j]=sum;
	}
	printf("the resultant array is");
	printf("[ ");
	for(i=0;i<4;i++)
	{
		printf("%d ",res[i]);
	}
	printf("]");
}
