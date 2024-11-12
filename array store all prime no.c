# include <stdio.h>
  int main()
{
	int n,i,arr[25],a;
	int prime[25],j=0,flag=0,k=0;
	
	printf("enter a number-");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		flag=0;
		
		for(j=2;j<a[i]/2;j++)
		{
			if(a[i]/j==0)
			{
				flag=1;
				break;
			}
		}
	
	if(flag==0)
	{
		prime[k++]=a[i];
	}
     }
     printf("the prime number are \n");
     for(i=0;i<k;i++)
     {
     	printf("%d",prime[i]);
	 }
}
