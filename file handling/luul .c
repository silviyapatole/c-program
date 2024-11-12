# include <stdio.h>
	void convertstring(char *str)
	{
		while (*str)
		{
			if(islower(*str))
			*str=toupper(*str);
			
			else if(isupper(*str))
			*str=tolower(*str);
					
			else if(isdigit(*str))
			*str='*';
			
			else if(*str==' ')
			*str='#';
					
			str++;
		}
	}
	int main(){
		char str[100];
		
		printf("enter a string-");
		gets(str);
		
			convertstring(str);
			
				printf("converted string: %s \n",str);
				
				return 0;
	}
