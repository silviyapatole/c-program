#include<stdio.h>
 void main()
 {
 	char arr[50],x,i;
 	int n;
 	
 	printf("enter the number of elelments u want to enter-");
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++)
 	{
 		printf("enter value for index%d",i);
 		scanf("%s",&arr[i]);
	}
	printf("\nenter city u want to search in array-");
	scanf("%s",&x);
	
 	for(i=0;i<n;i++)
 	{
	 	if(strcmp(arr[i],x)==0)
	 	{
	 		printf("\n%s found at %d position.\n",x,i);
	 		break;
	 		
		}
	 }
	 if(i=n)
	 {
	 	printf("\n%snot found in the array.\n-",x);
	 }
 }
