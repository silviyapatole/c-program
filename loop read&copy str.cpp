#include <stdio.h>
int main()
{
	char s1[100],s2[100],i;
	printf("enter the string-");
	scanf("%c",&s1);
	
	for(i=0; s1[i]!='\0'; i++)
	{
		s2[i]=s1[i];
	}
	printf("the copied string is-%s",s2);
}
