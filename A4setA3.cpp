#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
int n,i;
char str[20];
printf("enter the string to get reversed:");
gets(str);
n=strlen(str);
printf("\n reversed string is\n:");
for(i=n-1;i>=0;i--)
{
printf("%c",str[i]);
}
getch();
return 0;
}

