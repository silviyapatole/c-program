
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[100],s2[100];
	printf("enter the string-");
	scanf("%c",&s1);
	
	strcpy(s2,s1);
	
	printf("the copied string is-%s",s2);
}
