#include<stdio.h>
int main()
{
	int i,low,mid,high,n,m,arr[100];
	
	
	printf("enter number of element-\n");
	scanf("%d",&n);
	
	printf("enter interger-\n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("enter value to find-\n");
	scanf("%d",&m);
	
	low=0;
	high=n-1;
	mid=(low+high)/2;
	
	while(low<=high){
		if(arr[mid]<m)
			low=mid+1;
		else if(arr[mid]==m){
			printf("%dfount at location %d",m,mid+1);
			break;
		}
		else
			high=mid+1;
			mid=(low+high)/2;
    }
		if(low>high)
			printf("not fount!%d is not present in the list",m);
			return 0;

}
