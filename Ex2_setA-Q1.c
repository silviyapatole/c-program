#include<stdio.h>
void bubble_sort(int arr[20],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void generate(int arr[20],int n)
{
	int i;
	for(i=0;i<n;i++)
	arr[i]=rand()%10;
}
void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[20],i,j,n;
	printf("\nenter how many element:");
	scanf("%d",&n);
	generate(arr,n);
	printf("\n element are:\n");
	display(arr,n);
	bubble_sort(arr,n);
	printf("\n after sorting elements are:\n");
	display(arr,n);
}
