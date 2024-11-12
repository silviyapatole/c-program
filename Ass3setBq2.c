#include<stdio.h>
#include<string.h>

void merge(char arr[][50],int beg,int mid,int end)
{
	int i,j,k;
	int n1=mid-beg+1;
	int n2=end-mid;
	
	char leftarr[n1][50],rightarr[n2][50];
	for(i=0;i<n1;i++){
		strcpy(leftarr[i],arr[beg+i]);
	}
	
	for(j=0;j<n2;j++){
		strcpy(rightarr[j],arr[mid+1+j]);
	}
	
	
	i=0;
	j=0;
	k=beg;
	
	while(i<n1 && j<n2)
	{
		if(strcmp(leftarr[i],rightarr[j])<0)
		{
			strcpy(arr[k],leftarr[i]);
			i++;
		}
		else
		{
			strcpy(arr[k],rightarr[j]);
			j++;
		}
		k++;
	}
	while(i<n1)
	{
		strcpy(arr[k],leftarr[i]);
		i++;
		k++;
	}
	while(j<n2)
	{
		strcpy(arr[k],rightarr[j]);
		j++;
		k++;
	}
}
void mergesort(char arr[][50],int beg,int end)
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
void printarr(char arr[][50],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%s",arr[i]);
		printf("\n");
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
	char arr[6][50]={"cat","bat","fan","mat","man","hat"};
	//int n=sizeof(arr)/sizeof(arr[0]);
	printf("before storing array elements are-\n");
	printarr(arr,6);
	mergesort(arr,0,6-1);
	display(arr,6);
	printf("array sorting array elements are-\n");
	printarr(arr,6);
	
	return 0;	
}

