#include <stdio.h>
#include <string.h>
 
 struct student{
 	char name[30];
 	int roll;
 	int percentage;
 };
  
  int main()
  {
   student s[10];
   int n,i,j,temp;
   char tempstr[100];	
  	printf("how many students you want to enter-");
  	scanf("%d",&n);
  	
  	for(i=0; i<n; i++)
  	{
  		printf("roll no-");
  		scanf("%d",&s[i].roll);
  		
  		printf("name-");
  		scanf("%s",&s[i].name);
  		
  		printf("percentage-");
  		scanf("%d",&s[i].percentage);
  }
  
  	for(i=0;i<n;i++){
  		for(j=0; j<n-i-1; j++)
  		{
  			if(s[j].percentage  < s[j+1].percentage)
  			{
  				temp=s[j].roll;
  				s[j].roll=s[j+1].roll;
  				s[j+1].roll=temp;
  				
  				temp=s[j].percentage;
  				s[j].percentage=s[j+1].percentage;
  				s[j+1].percentage=temp;
  				
  				strcpy(tempstr,s[j].name);
  				strcpy(s[j].name,s[j+1].name);
  				strcpy(s[j+1].name,tempstr);
  				
			  }
		  }
	  }
  		
		  
printf("<----------------- Display Records According to percentages ------------------>\n");
		  
	for(i=0; i<n; i++)
	{
		printf("\n");
		printf("%d\n",s[i].roll);
		printf("%s\n",s[i].name);
		printf("%d\n",s[i].percentage);
		printf("\n");
		
	}
  		
  }
