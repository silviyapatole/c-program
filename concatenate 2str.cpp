#include<stdio.h>
#include<conio.h>
int main()
{
	char a1[100],b1[100];
	printf("enter the first string:\n");
	gets(a1);
	printf("enter the second string:\n");
	gets(b1);
	char*a=a1;
	char*b=b1;
	while(*a)
	{
		a++;
	}
	while(*b)
	{
		*a=*
		b++;
		a++;
	}
	*a='\0';
	printf("the string after concatenation is:%s",a1);
	getch();
	return 0;
}
