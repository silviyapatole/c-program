#include <stdio.h>
  int sum(int,int);
  main(){
  	int a,b,x;
  	
  	printf("Enter the values-");
  	scanf("%d %d",&a,&b);
  	
  	x=sum(a,b);
  	printf("sum is-%d",x);
  }
  //function definition
  int sum(int a,int b){
  	int c;
  	c=a+b;
  	return c;
  }
