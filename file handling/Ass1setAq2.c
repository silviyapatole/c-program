#include<stdio.h>
#include<string.h>

void bubble(char arr[][50],int n)
 {
 	int i,j;
 	char temp[50];
 		for(i=0; i<n; i++)
 		{
 			for(j=i+1; j<n; j++)
 			{
 				if(strcmp(temp,arr[j])>1)
 				{
 					strcpy(temp,arr[i]);
 					strcpy(arr[i],arr[j]);
 					strcpy(arr[j],temp);
				 }
			 }
		 }
}

void display(char arr[][50],int n)
	{
		int i,j;
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
	bubble(arr,5);
	display(arr,5);
}

