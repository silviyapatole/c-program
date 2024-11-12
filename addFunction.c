#include<stdio.h>

int add(int a,int b);

int main(){
	int a,b;
	printf("Enter number1: ");
	scanf("%d",&a);
	printf("Enter number2: ");
	scanf("%d",&b);
	
	add(a,b);
}

int add(int a, int b)
{
	printf("%d",a+b);
}
