#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *list = NULL;

void insertatfront(int data)
	{
		struct node *p;
		
		p=(struct node *)malloc(sizeof(struct node *));
		p->info=data;
		p->next=NULL;

			if(list==NULL)
			{
				list=p;
			}
			else
			{
				p->next=list;
				list=p;
			}
	}
void display(){
	struct node *p;
	p=list;
	
		if(p==NULL)
		{
			printf("list is empty");
		}
		else
		{
			while(p !=NULL)
			{
				printf("%d->",p->info);
				p=p->next;
			}
			printf("\n");
		}
}
int main()
{
	int ch,n;
	
	while(1)
	{
		printf("1. insert at begin\n");
		printf("2. display\n");
		scanf("%d",&ch);
		
	    	switch(ch)
	    	{
	    		case 1:printf("enter the value-");
	    		       scanf("%d",&n);
	    		       insertatfront(n);
					   break; 	   	       
	    		case 2:display();
	    		       break;
			}
	}
}

	

