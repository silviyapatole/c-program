#include <stdio.h>
//#define N 10;
int stack[10];
int top = -1;

int isfull()
	 {
	 	if((top+1 )== 10)
	 		return 1;
	 	
	 	return 0;
	 }
	 
int isempty()
		{
			if(top==-1)
				return 1;
			
			return 0;
		}
		
void peak()
{
			printf("the element at top is %d",stack[top]);
}
		
void push(){

		int n;
		
			printf("enter a value - ");
			scanf("%d",&n);
			
			if(!isfull())
			{
				top = top + 1;
				stack[top]=n;
				
			}
			else
			{
				printf("stack is full-");
			}
		
}

void pop()
		{
			if(! isempty())
			{
				top--;
			}
			else
			{
				printf("you cannot delete,the stack is empty-");
			}
		}
		
void display()
		{
			int i;
			printf("\n");
			if(!isempty())
			{
				for(i=0;i<=top;i++)
				{
					printf("%d\t",stack[i]);
				}
			}
				else
				{
					printf("stack is empty\n");
				}
			printf("\n");
			
		}

void search()
		{
		   int n,i,flag=0;
		   printf("enter the value to search");
		   scanf("%d",n);
		   
		   if(!isempty)
		   {
		   		for(i=0;i<n;i++)
		   		{
		   			if(stack[i]==n)
		   			
		   			flag=1;
		   			
		   			printf("the value is -");
				   }
			   }	
		}


int main()
{
	int ch;
	while(1){
	printf("top - %d\n",top);
	printf("1. push\n");
	printf("2. pop\n");
	printf("3. peak\n");
	printf("4. display\n");
	printf("5. search\n");
	printf("enter your choice - ");
	scanf("%d",&ch);
	
	
	switch(ch)
	{
		case 1:push();
		      break;
		case 2:pop();
		      break;
		case 3:peak();
		      break;
		case 4:display();
		      break;
		case 5:search();
		      break;
		default:printf("wrong choice");     
	}
	}
	
}
	 
		
		
		
		
		

