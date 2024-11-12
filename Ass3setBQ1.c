#include<stdio.h>
#include<string.h>
void swap(char arr[][50],int i,int j)
{
	char temp[50];
	strcpy(temp,arr[i]);
	strcpy(arr[i],arr[j]);
	strcpy(arr[j],temp);
}
int partition(char arr[][50],int l,int r)
{
	char pivot[50]; 
	strcpy(pivot,arr[r]);
	int i=l-1,j;
	for(j=l;j<r;j++)
	{
		if(strcmp(arr[j],pivot)<0)
		{
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,r);
	return i+1;
}
void quicksort(char arr[][50],int l,int r)
{
	if(l<r)
	{
		int pivot;
		pivot=partition(arr,l,r);
		quicksort(arr,l,pivot-1);
		quicksort(arr,pivot+1,r);
	}
}

void display(char arr[][50],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s ",arr[i]);
	}
}
int main()
{
	char arr[6][50]={"d","g","a","c","b","e"};
	quicksort(arr,0,5);
	display(arr,6);
}
