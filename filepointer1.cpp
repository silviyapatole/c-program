#include <stdio.h>
int main()
{

	char c,name[50],put,null;
	FILE *fp;
printf("enter the filename-");
	scanf("%s",name);
	
	fp=fopen(name,"r");
	if(fp)
	{
		printf("data in the file are-");
		while((c=fgetc(fp))!=EOF)
		{
			putchar(c);
		}
		 
	}
	fclose(fp);
}
