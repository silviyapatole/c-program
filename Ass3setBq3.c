#include<stdio.h>
#include<string.h>

void merge(int arr[6],int beg,int mid,int end)
{
	int i,j,k;
	int n1=mid-beg+1;
	int n2=end-mid;
	
	int leftarr[n1],rightarr[n2];
	for(i=0;i<n1;i++){
	    leftarr[i]=arr[beg+i];
	}
	
	for(j=0;j<n2;j++){
		rightarr[j]=arr[mid+1+j];
	}
	
	
	i=0;
	j=0;
	k=beg;
	
	while(i<n1 && j<n2)
	{
		if(leftarr[i]>=rightarr[j])
		{
			arr[k]=leftarr[i];
			i++;
		}
		else
		{
			arr[k]=rightarr[j];
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		arr[k]=leftarr[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=rightarr[j];
		j++;
		k++;
	}
}
void mergesort(int arr[6],int beg,int end)
{
	if(beg < end)
	{
		int mid;
		mid=(beg+end)/2;
		mergesort(arr,beg,mid);
		mergesort(arr,mid+1,end);
		merge(arr,beg,mid,end);
	}
}
void printarr(int arr[6],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
}

void display(int arr[6],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
}

int main()
{
	int arr[6],n;
	printf("enter the number of element u want to enter-");
	scanf("%d",&n);
	//int n=sizeof(arr)/sizeof(arr[0]);
	printf("before storing array elements are-\n");
	printarr(arr,n);
	//mergesort(arr,0,n-1);
	display(arr,n);
	printf("array sorting array elements are-\n");
	printarr(arr,n);
	
	return 0;	
}

