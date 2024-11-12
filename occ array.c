#include <stdio.h>
 int main()
{
	int arr[40];
	int n,i=0,count=0,occ;
	
	//accept array
	printf("enter the number -");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the no to check occurance -");
	scanf("%d",&occ);
	
	for(i=0;i<n;i++)
	{
		if(arr[i] == occ){
			count++;
		}
	}
	
	printf("the occorunce of %d is %d",occ,count);
	
	

}
	
	
