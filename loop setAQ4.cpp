#include <stdio.h>
  int main()
{
	int a,i;
	 
	 printf("Enter the number - ");
	 scanf("%d",&a);
	 for(i=1;i<=a;i++)
	 if(a%1==0 && a%i==0)
	 {
	 	printf("\nit is a prime number");
	 }
	 else
	 {
	 	printf("\nit is not a prime number");
	 }
}
