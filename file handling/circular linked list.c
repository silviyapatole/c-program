#include<stdio.h>
#include<stdlib.h>

struct node{
	int info;
	struct node *next;
};

struct node *list=NULL;

void insertatfront(int data)
{
	struct node *p,*temp;
	p=(struct node *)malloc(sizeof(struct node *));
		p->info=data;
		p->next=NULL;
		
			if(list==NULL)
			{
				list=p;
				list->next=list;
			}
			else
			{
				p->next=list;
		        temp=list;
		        while(temp->next != list)
					temp=temp->next;
				
				temp->next=p;
				list=p;
			}
			
}

void deleteatfront()
{
	struct node *p,*temp;
	
		if(list==NULL)
		{
			printf("element to delete");
		}
		else if(list->next == list)
		{
			p=list;
			free(p);
			list=NULL;
		}
		else
		{
			temp=list;
			p=list;
			while(temp->next != list){
				temp=temp->next;
			}	
			list=list->next;
			temp->next=list;
			p->next=NULL;
			free(p);
		}
}

void insertatend(int data)
{
	struct node *p,*temp;
	
	p=(struct node *)malloc(sizeof(struct node *));
	   p->info=data;
		p->next=NULL;
		
			if(list==NULL)
			{
				list=p;
				list->next=list;
			}
			else
			{
				p->next=list;
		        temp=list;
		        while(temp->next != list)
					temp=temp->next;
				
				temp->next=p;
				p->next=list;
		}
}

void deleteatend()
{
	struct node *p,*temp;
	
		if(list==NULL)
		{
			printf("element to delete");
		}
		else if(list->next==list)
		{
			p=list;
			free(p);
			list=NULL;
		}
		else
		{
			temp=list;
			while(temp->next->next!=list)
			temp=temp->next;
			
			p=temp->next;
			temp->next=list;
			p->next=NULL;
			free(p);
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
			while(p->next != list)
			{
				printf("%d->",p->info);
				p=p->next;
			}
			printf("%d->",p->info);
			
		}
		printf("\n");
}


int main()
{
	int ch,n,e;
	
	while(1)
	{
		printf("1. insert at front\n");
		printf("2. delete at front\n");
		printf("3. insert at end\n");
		printf("4. delete at end\n");
		printf("5. display\n");
		scanf("%d",&ch);
		
	    	switch(ch)
	    	{
	    		case 1:printf("enter the value-");
	    		       scanf("%d",&n);
	    		       insertatfront(n);
					   break; 
				case 2:deleteatfront();
				       break;
				case 3:printf("enter the value-");
				       scanf("%d",&e);
				       insertatend(e);
				       break;
				case 4:deleteatend();
				       break;
				case 5:display();
				       break;
        	}
    }
}

