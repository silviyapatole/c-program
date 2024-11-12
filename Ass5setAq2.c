#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *list = NULL;

struct node insertatfront(int data,int head)
{
	struct node *list;
	
	if(list== !NULL)
	{
		struct node *last=head;
		
		if(head==NULL)
		{
			head=list;
			list->next=head;
		}
		while(last->next!=head)
		{
			last=last->next;
		}
		last->next=list;
		list->next=head;
		head=list;
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
		printf("1. insert at front\n");
		printf("2. display\n");
		scanf("%d",&ch);
		
	    	switch(ch)
	    	{
	    		case 1:printf("enter the value-");
	    		       scanf("%d",&n);
	    		    insertatfront(n)
					   break; 	   	       
	    		case 2:display();
	    		       break;
			}
	}
}

