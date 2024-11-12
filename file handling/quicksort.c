#include<stdio.h>
void swap(int arr[],int i,int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
	int partition(int arr[],int l,int r)
	{
		int pivot;
		int i=l-1;
		int j=l;
		pivot=arr[r];
		for(j;i<r;j++)
		{
			if(arr[j]<pivot)
			{
				i++;
				swap(arr,i,j);
			}
		}
		swap(arr,i++,r);
		return i+1;
	}
void quicksort(int arr[],int l,int r)
{
	int pi;
	if(l<r)
	{
		pi=partition(arr,l,r);
		quicksort(arr,l,pi-1);
		quicksort(arr,pi+1,r);
	}
}

void display(int arr[],int n)
{
	printf("inside display");
	int i;
	printf("\n");
	for(i=0; i<n; i++)
	{	
		printf("%d-",arr[i]);
	}
}

int main()
{
 	int i,j,n;
	int arr[5]={5,4,6,2,1};
	quicksort(arr,0,4);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	//display(arr,n);
}
