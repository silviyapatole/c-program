#include<stdio.h>

void sentinelsearch(int arr[],int n,int key)
{
	int last=arr[n-1];
	
	arr[n-1]=key;
	int i=0;
	
	while(arr[i]!=key)
	{
		i++;
	}
	arr[n-1]=last;
	
	if((i<n-1)||(arr[n-1]==key))
	{
		printf("%d is present at index %d\n",key,i);
	}
	else
	{
		printf("element not found\n");
	}
}
int main()
{
	int arr[]={10,20,180,30,60,50,100,110,70};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=180;
	sentinelsearch(arr,n,key);
	
	return 0;
}
