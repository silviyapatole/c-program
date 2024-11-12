#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *p, n, i, max;
printf("enter the n number:");
scanf("%d", &n);
p=(int*)malloc(n*sizeof(int));
printf("enter the elements:");
for(i=0; i<n; i++)
{
scanf("%d", &p[i]);
printf("\n");
}
max=p[0];
for(i=0;i<n;i++)
{
if(max<p[i])
{
max=p[i];
}
}
printf("maximum number is: %d\n", max);
getch();
return 0;
}

