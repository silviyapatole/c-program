#include <stdio.h>
  int main()
{
	char ch;
	int nu=0;
	
	while(1){
		printf("Enter a character - ");
		scanf("\n%c",&ch);
		
		if(ch=='q'){
			printf("count of a is - %d",nu);
			exit(0);
		}
		if(ch=='a'){
			nu++;
		}
	}
	
	
}
