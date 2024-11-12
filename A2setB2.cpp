#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
int a[30], i,n, sum = 0;
int count=0;
int *ptr;
float avg;
printf("\n Enter the total number of elements you want to enter : ");
scanf("%d",&n);
printf("\n Enter element in aaray:");
for(i = 0;i<n;i++){
scanf("%d",&a[i]); }
for(i = 0;i<n;i++){
if(a[i]!=0)
{
count++;
 }
}
ptr = (int *)malloc(count * sizeof(int));
for(i = 0;i<n;i++)
{
if(a[i]!=0)
{
*(ptr+i)=a[i];
sum=sum+*(ptr+i); 
}
}
avg=sum/count;
printf("sum is %d \n",sum);
printf("avg is %f\n",avg);
}


