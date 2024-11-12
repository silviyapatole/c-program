#include <stdio.h>
void nextchar(char,int);
 int main()
{
	char ch;
	int n;
	
	printf("Enter the character-");
	scanf("%c",&ch);
	
	printf("how many next character");
	scanf("%d",&n);
	
	nextchar(ch,n);
}
   void nextchar(char ch,int n)
   {
   
 int i;
	for(i=1;i<=n;i++)

	{
		printf("%c",ch+i);
	}
}
