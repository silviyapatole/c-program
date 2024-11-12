#include<stdio.h>

int main()
{
	int n,arr[50],square[50],i;
	
	printf("enter the no of elements-");
	scanf("%d",&n);
	
	printf("enter the elements:\n");
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
		square[i]=arr[i]*arr[i]; 
	}
	printf("\noriginal element:\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("\nsquared array:\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",square[i]);
	}
 } 
