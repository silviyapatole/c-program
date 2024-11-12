#include <stdio.h>
  int main()
{
	int n,n1,n2,rem=0,temp=0,i,sum;
	
	printf("Enter the number-");
	scanf("%d",&n1);
	
	printf("Enter the number-");
	scanf("%d",&n2);
	
	temp=n;
	while(n>0){
		rem=n%10;
		sum+=rem*rem*rem;
		n=n / 10;
	}
		//printf("sum-%d, n-%d,temp-%d",sum,n,temp);
	
	while(n1<n2){
		sum+n1;
		n1++;
	}
	
	
	for(i=1;i<n;i++)

		if(sum==temp)
		{
			printf("it is in a range");
		}
		else{
			("it is not in a range");
		}
		
	

}
