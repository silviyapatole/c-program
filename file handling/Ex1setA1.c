#include<stdio.h>
#include<stdlib.h>

void insort(char a[],char n)
{
	char i,j,temp;
	
	for(i=1; i<n; i++)
	{
		temp=a[i];
		j=i-1;
		
		while(j>=0 && temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

void display(char a[],char n)
{
	char i;
	printf("\n");
	for(i=0; i<n; i++)
	{	
		printf("%d-",a[i]);
	}
}

int main()
 {
 	char i,j,arr[10];
 	char n,a;
 	
 		printf("how many elementes-");
 		scanf("%d",&n);
 		
 			for(i=0; i<n; i++)
 			{
 			  scanf("%d",&arr[i]);
			}
			display(arr,n);
			insort(arr,n);
			display(arr,n);
 }

