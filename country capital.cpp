#include <stdio.h>
#include <string.h>

 char countries[3]={'India','U.S.A','UAE'};
 char capital[3]={'Delhi','W.D.C','Dubai'};
 
 int main()
 {
 	char input[30];
 	int found=0,i;
 	
 	printf("Enter the name of country-");
 	scanf("%s",&input);
 	
 	for(i=0; i<3; i++)
 	{
 		if(strcmp(input countries[i])==0)
 		{
 			printf("capital=%s",capital[i]);
 			found=1;
 			break;
		 }
	 }
	 if(found==0)
	 {
	 	printf("Entered country is not present");
	 }
 }
