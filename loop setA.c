#include <stdio.h>
  int main()
{
	int x,n,value=1,i;
	 printf("Enter x");
	 scanf("%d",&x);
	 
	 printf("Enter n");
	 scaanf("%d",&n);
	 
	 i=0;
	 while(i<n){
	 	value=value*x;
	 	i=i+1;
	 }
	 printf("value=%d",value);
}
