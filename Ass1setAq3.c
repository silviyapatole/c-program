#include<stdio.h>

int main()
{
	int arr1[50],arr2[50],n,i,j;
	
	printf("enter the elements-");
	scanf("%d",&n);
	j=0;
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr1[i]);
		arr2[j++]=arr1[i];
	}
	
	printf("\noriginal element:\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr1[i]);
	}
	printf("\ncopied array:\n");
	for(i=0 ; i<n ; i++)
	{
		printf("%d\n",arr2[i]);
	}
}
