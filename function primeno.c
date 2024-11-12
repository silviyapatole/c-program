#include <stdio.h>
void primenumber(int);
  int main()
{
	int n,ul;
	
	printf("Enter a number");
	scanf("%d",&n);
	
//	printf("Enter a upperlimit");
//	scanf("%d",&ul);
	
	primenumber(n);
}
void primenumber(int n)
{
	int i,flag=0;
	for(i=1;i<=n;i++)
	{
//		printf("%d",i);
		if(i%2 != 0 && i%i == 0)
		{
			printf("%d",i);
		}
	}
//	if(flag==1)
//	{
//		printf("it is not a prime number");
//	}else{
//		printf("a prime number");
//	}
}

