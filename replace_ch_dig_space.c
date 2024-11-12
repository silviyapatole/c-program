#include <stdio.h>
#include <string.h>
int main()
{
	char str[100],i;
	int n;
	
	printf("enter the string");
	gets(str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
		{
			str[i]='*';
		}
		else if(islower(str[i]))
		{
			str[i]=toupper(str[i]);
		}
		else if(isupper(str[i]))
		{
			str[i]=tolower(str[i]);
		}
		else if(isdigit(str[i]))
		{
			str[i]='?';
		}
		else
		{
			continue;
		}
	}
	
	puts(str);
}
