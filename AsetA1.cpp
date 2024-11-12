#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p, n,i;
 printf("How many elements:");
 scanf("%d",&n); 
p = (int*)malloc(n*sizeof(int)); 
 for(i=0; i<n;i++)
 scanf("%d",p+i);
for(i=0; i<n;i++) 
printf("%d\t",(p+i));
getch();
clrscr();
return 0;
}

