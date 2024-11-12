#include <stdio.h>
  int main()
{
	int i,n,a[10],b[10],sum=0,avg=0,k=0,p;
	
	printf("enter the integer-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			b[k]=a[i];
			k=k+1;
			sum=sum+a[i];
		}
	}
	printf("the sum is-%d",sum);
	printf("the avg is-%d",sum/k);
}
