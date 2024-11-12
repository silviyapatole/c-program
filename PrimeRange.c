#include<stdio.h>

int main(){
	int ll,ul;
	
	printf("Enter lower limt :");
	scanf("%d",&ll);
	
	printf("Enter upper limt :");
	scanf("%d",&ul);
	
	primeNumber(ll,ul);
}

int primeNumber(int ll,int ul)
{	
	int i=ll,flag,j;
	
	for(i;i<ul;i++)
	{
		flag = 0;
		for(j=2;j<i;j++)
		{
			if(i % j == 0)
			{
				flag = 1;
				break;
			}
		}
		if(flag == 0)
		{
			printf("%d\n",i);
		}
		
	}
}
