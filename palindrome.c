#include <stdio.h>
  int main()
{
	 int num,reverse=0,rem,temp=0;
	 
	 printf("enter the original number-");
	 scanf("%d",&num);
	 
	 temp=num;
	 while(num>0){
	 	rem=num%10;
	 	reverse=reverse*10+rem;
	 	num=num/10;
	 	 
	 	 
	 }
	 
	 if(reverse==temp)
	 {
	 	printf("it is palindrome");
	 }
	 else{
	 	printf("it is not a palindrome");
	 }
}
