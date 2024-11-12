#include<stdio.h>
#include<string.h>
int main()
{
	char str[50],rev[50];
	int len,flag=1,i,j;
	
	printf("enter the string-");
	scanf("%s",str);
	
	len=strlen(str);
	strcpy(rev,str);
	j=0;
	for(i=len-1;i >=len/2;i--)
	{	
		if(rev[i] != str[j++])
		{
			flag = 0;
			break;
		}
	}
	if(flag==1)
	{
		printf("it is a palindrome");
	}
	else
	{
		printf("it is not a palindrome");
	}
}
