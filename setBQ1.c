#include <stdio.h>
int main()
{
	int n,i,one,two,three;
	    one=0;
	    two=1;
	    three=one+two;
	
	printf("Enter number n-");
	scanf("%d",&n);
	
	 printf("%d",one);
	 printf("\t%d",two);
	 
	for(i=3;i<=n;i++)
   {
		printf("\t%d",three);
		one=two;
		two=three;
		three=one+two;
	}		
	
}
