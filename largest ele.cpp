#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n;
	int arr[100],max=0;
	printf("enter the number of elements:(1 to 100)-");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number %d-",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("the largest number is:%d-",max);
}
