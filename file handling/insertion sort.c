#include<stdio.h>
#include<stdlib.h>

void insort(int a[],int n)
{
	int i,j,temp;
	
	for(i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
		
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

void display(int a[],int n)
{
	int i;
	printf("\n");
	for(i=0; i<n; i++)
	{	
		printf("%d-",a[i]);
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
			insort(arr,n);
			display(arr,n);
 }

