#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int i,length=0;
	printf("enter the string:\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	printf("length of input string:%d",length);
}
