#include<stdio.h>
int main()
{
	int deg,a[5],i,power;
	printf("enter degree of polynomial-");
	scanf("%d",&deg);
	
	for(i=0 ; i<=deg ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the polynomial is-");
	power=deg;
	for(i=0 ; i<=deg ; i++)
	{
		if(power!=0)
		{
			printf("%dx^%d + ",a[i],power--
			);
		}
		else{
			printf("%d",a[i]);
		}
	}
}
