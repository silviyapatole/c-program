#include <stdio.h>
  void sum(int,int,int);  //function declaration
  int main()
   {
   	int a,b,c;
   	printf("Enter the numbers to add-");
   	scanf("%d %d %d",&a,&b,&c);
   	
   	sum(a,b,c); //function call
   
   	//function defination
   
   	
}

void sum(int a,int b,int c){
   		int d;
   		d=a+b+c;
   		printf("the sum is-%d",d);
	   }
