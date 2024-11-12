#include<stdio.h>
#include<string.h>
	
void int_sort(char arr[][50],int n)
{
	int i,j;
	char temp[50];
	for(i=1 ; i<n ; i++)
	{
		strcpy(temp,arr[i]);
		j=i-1;
		while(j>=0 && strcmp(temp,arr[j])<1)
		{
			strcpy(arr[j+1],arr[j]);
			j--;
		}
		strcpy(arr[j+1],temp);
		
	}
}

void display(char arr[][50],int n)
{
	int i;
	printf("\n");
	for(i=0; i<n; i++)
	{	
		printf("%s-",arr[i]);
	}
}

int main()
{
	char arr[10][50],n,i;
	
	for(i=0 ; i<5 ; i++)
	{
		scanf("%s",&arr[i]);
		printf("the entered string is - %s \n",arr[i]);
	}
	int_sort(arr,5);
	display(arr,5);
	
}
