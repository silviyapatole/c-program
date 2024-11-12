#include<stdio.h>
#include<stdlib.h>

struct node{
	struct node *prev;
	struct node *next;
	int data;
};
struct node *list = NULL;

void insertatfront(int x)

	{
	    struct node *p;
		
		p=(struct node *)malloc(sizeof(struct node *));
		
		p->next=NULL;
		p->prev=NULL;
		p->data=x;
		
		if(list==NULL)
		{
			list=p;
		}
		else
		{
			p->next=list;
			list->prev=p;
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
				printf("%d->",p->data);
				p=p->prev;
			}
			printf("\n");
		}
}
int main()
{
	int ch,n,m;
	
	while(1)
	{
		printf("1. insert at front\n");
		printf("2. display\n");
		scanf("%d",&ch);
		
	    	switch(ch)
	    	{
	    		case 1:printf("enter the values-");
	    		       scanf("%d",&n);
				       insertatfront(n);
					   break; 	   	       
	    		case 2:display();
	    		       break;
			}
	}
}
