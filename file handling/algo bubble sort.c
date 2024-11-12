#include<stdio.h>
#include<stdlib.h>
 void main()
 {
 	int i,j,arr[10];
 	int n,a;
 	
 		printf("how many elementes-");
 		scanf("%d",&n);
 		
 			for(i=0; i<n; i++)
 			{
 			  scanf("%d",&arr[i]);
			}
				bubble(a,n);
				display(a,n);
 }
 
 void bubble(int a[],int n)
 {
 	int i,j,temp;
 		for(i=0; i<n; i++)
 		{
 			for(j=i+1; j<n; j++)
 			{
 				if(a[j]<a[i])
 				{
 					temp=a[i];
 					a[i]=a[j];
 					a[j]=temp;
				 }
			 }
		 }
		 
	void display(int a[],int n)
	{
		for(i=0; i<n; i++)
		{
			printf("%d-",a[i]);
		}
	}
 }
