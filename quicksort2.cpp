#include <stdio.h>
#include <string.h>
  int main()
{
	char s1[100],s2[100],n;
	  
	  printf("enter the first string-");
	  scanf("%c",&s1);
	  
	  printf("Enter the second string-");
	  scanf("%c",&s2);
	  
	  n=strcmp(s1,s2);
	  
	  if(n>0)
	  {
	  	strcat(s1,s2);
	  	
	  	printf("%s",s1);
	  }
	  else if(n<0)
	  {
	  	strcat(s2,s1);
	  	
	  	printf("%s",s2);
	  }
	  else{
	  	printf("length of equal strings are-%d",n);
	  }
}
