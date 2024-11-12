#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],c;
	
	printf("enter the string-");
	scanf("%s",&s1);
	
	printf("enter a character to search-");
	scanf("%c",&c);
	
	if(strchr(s1,c))
	{
		printf("the character is present");
	}
	else
	{
		printf("character is not present");
	}
}
