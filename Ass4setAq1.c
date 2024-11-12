#include<stdio.h>
 void main()
 {
 	int arr[50],n,i,x;
 	
 	printf("enter the number of elelments u want to enter-");
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++)
 	{
 		printf("enter value for index%d",i);
 		scanf("%d",&arr[i]);
	}
	printf("\nenter number u want to search in array-");
	scanf("%d",&x);
	
 	for(i=0;i<n;i++)
 	{
	 	if(arr[i]==x)
	 	{
	 		printf("\n%d found at %d position.\n",x,i);
	 		break;
	 		
		}
	 }
	 if(i=n)
	 {
	 	printf("\n%dnot found in the array.\n-",x);
	 }
 }
