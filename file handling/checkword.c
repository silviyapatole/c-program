#include <stdio.h>
int main()
{
	char str[50],n,i;
	int flag=0;
	
	printf("enter the string");
	gets(str);
	
	printf("enter the letter");
	scanf("%c",&n);
	{
		for(i=0;str[i]!='\0';i++)
	{	
		if(str[i]==n)
		{
			flag=1;
			break;
		}
	}
	
	if(flag == 1){
		printf("the word is present");
	}else{
		printf("the word is not present");
	}
	}
}
