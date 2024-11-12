#include<stdio.h>
#include<stdlib.h>

void selection_sort(int a[],int n)
{
	int i,j,small;
	
	for(i=0; i<n-1; i++)
	{
		small=i;
		
		for(j=i+1; j<n; j++)
		{
			if(a[j]<a[small])
			{
				small=j;
			}
		}
		int temp=a[small];
		a[small]=a[i];
		a[i]=temp;
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
			selection_sort(arr,n);
			display(arr,n);
 }
