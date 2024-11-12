#include <stdio.h>
  int main()
{
	int n;
	char ch;
	
	printf("Enter the character");
	scanf("%d",&ch);
	
	printf("Enter the number");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%c",ch+i);
	}
}
