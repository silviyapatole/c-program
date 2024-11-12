#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p, n, i;
printf("enter the number of elements:");
scanf("%d",&n);
p=(int*)calloc(n,sizeof(int));
if(p==NULL)
{
	printf("memory are not allocated");
	exit(0);
}
else
{
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
		
	}
}

for(i=0; i<n;i++)
	printf("%d\t",*(p+i));

getch();
return 0;
}

