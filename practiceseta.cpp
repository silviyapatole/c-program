#include<stdio.h>
#include <stdlib.h>
int main()
{
int *p, n,i;
printf("How many elements :");
scanf("%d",&n);
p = (int *)malloc(n*sizeof(int));
/* Accepting data */
for(i=0; i<n;i++)
scanf("%d",p+i);
/* Displaying data */
for(i=0; i<n;i++)
printf("%d\t",*(p+i));
}
