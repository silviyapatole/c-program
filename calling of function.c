#include <stdio.h>
  void sum();  //addition
  int main()
{
	sum(); //calling a function
}
  void sum()  //defination
{
	int a,b,c;
	printf("Enter a number-");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("addition=%d",c);
}
