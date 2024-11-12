#include <stdio.h>
  int main()
{
	int n,rem=0,sum=0,temp=0;
	
	printf("Enter a number-");
	scanf("%d",&n);
	
	temp =n;
	
	while(n>0){
		rem=n%10;
		sum +=(rem*rem*rem);
		n = n / 10;
	}
	
	//printf("sum-%d, n-%d,temp-%d",sum,n,temp);
	
	if(sum==temp)
	{
	printf("\nit is an amstrong number");
}
    else{
    	printf("\nit is not an amstrong number");
	}
}
