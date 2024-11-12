#include <stdio.h>
  int main()
{
	int n;
	while(1){
		printf("Enter a number - ");
		scanf("%d",&n);
		
		if(n<0){
			exit(0);
		}
	}
}
