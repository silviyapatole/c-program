#include<stdio.h>
#include<stdlib.h>
int main()
{
 int *a[10],r,c,i,j;
printf("Enter the order of matrix\n");
scanf("%d%d",&r,&c);
printf("Enter matrix elements\n");
 for(i=0;i<r;i++)
 {
 /**** dynamically allocate memory for every row ****/
 a[i]=(int *)malloc(c*sizeof(int));
 for(j=0;j<c;j++)
 {
scanf("%d",a[i]+j);
 }
 }
 /****** Display Matrix ******/
printf("The matrix is as below\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
printf("%d\t",*(*(a+i)+j));
 }
printf("\n");
 }
}

