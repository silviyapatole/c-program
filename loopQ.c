#include <stdio.h>
  int main()
{
	int n,n2;
	
	printf("Enter the n1-");
	scanf("%d",&n);
	printf("Enter the n2-");
	scanf("%d",&n2);
	while(n<n2){
		
		if(n%2==0)
		{
			printf("\t%d",n);
		}
		n++;
	}
	
}                  
