#include <stdio.h>
  int main()
{
	int LL,UL,sum=0;
		
		printf("Enter upper limit");
		scanf("%d",&UL);
		
		printf("Enter lower limit");
		scanf("%d",&LL);
		
		while(LL<=UL)
	
	{
		sum+=LL;
		LL++;
	}
	printf("%d",sum);
}
