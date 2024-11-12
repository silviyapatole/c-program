#include <stdio.h> 
#include<stdlib.h>

void bubble(int *a,int n)
 {
 	int i,j,temp;
 	int count=0;
 	for(i=0; i<n; i++)
 	{
 		for(j=i+1; j<n; j++)
 		{
 			if(a[j]<a[i])
 			{
 				temp=a[i];
 				count++;
 				a[i]=a[j];
 				a[j]=temp;
 				
			}
		}
	}
	printf("count:- %d\n",count);
		 
}

void display(int a[],int n)
{
	int i;
	printf("\n");
	for(i=0; i<n; i++)
	{	
		printf("%d\n\n",a[i]);
	}
	
}

 int main()
 {
 	int i,j,arr[10];
 	int n,a;
 	
 		printf("how many elementes-");
 		scanf("%d",&n);
 		
 			for(i=0; i<n; i++)
 			{
 			  scanf("%d",&arr[i]);
			}
			display(arr,n);
			bubble(arr,n);
			display(arr,n);
 }
 
