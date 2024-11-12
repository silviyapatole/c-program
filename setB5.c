#include <stdio.h>
  int main()
{
	int num,reverse=0,rem;
	
	printf("Enter the number - ");
	scanf("%d",num);
	
	while(num>0){
		rem=num%10;
		reverse=reverse*10+rem;
		num=num/10;
	}
	printf("reversed number=%d",reverse);
	
	while(reverse>0){
		rem=reverse%10;
	}
		switch(rem){
			case 0:printf("zero");
			    break;
			    
			    case 1:printf("one");
			           break;
			           
			    case 2:printf("two");
			            break;
			                  
			    case 3:("three");
			            break;
			                         
			    case 4:("four");
			            break;
			                                
			    case 5:("five");
			            break;
			                                        
			    case 6:("six");
			        	break;
			                                                
			    case 7:("seven");
			            break;
			                                                        
			    case 8:("eight");
			            break;
			                                                                
			    case 9:("nine");
			        	break;
		}
	             reverse=reverse/10;
}
