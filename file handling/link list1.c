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

void deleteatbegin()
{
	struct node *p;

	if(list==NULL)
	{
		printf("list is empty");
	}
	else
	{
		if(list->next==NULL)
		{
			p=list;
			list=NULL;
			free(p);
		}
		else
		{
			p=list;
			list=p->next; 
			p->next=NULL;
			free(p);
		}
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

void insertatend(int data)
{
	struct node *p,*q;
	
	p=(struct node *)malloc(sizeof(struct node *));
	p->info=data;
	p->next=NULL;
	
		if(list==NULL)
		{
			list=p;
		}
		else
		{
			q=list;
			while(q->next!=NULL)
			{
				q=q->next;
			}
			q->next=p;
		}
}

void deleteatend()
{
	struct node *p,*q;
	
	if(list==NULL)
	{
		printf("the list is empty");
	}
	else
	{
		if(list->next==NULL)
		{
			q=list;
			list=NULL;
			free(q);
		}
		else
		{
			p=list;
			while(p->next != NULL)
			{
				q=p;
				p=p->next;
			}
			p->next = NULL;
			q->next = NULL;
			free(p);
		}
	}
}

void insertatbetween(int x,int pos)
{
	int i;
	struct node *p,*q;
	
	p=(struct node *)malloc(sizeof(struct node *));
	p->info=x;
	p->next=NULL;
	
		if(list==NULL)
		{
			list=p;
		}
		else
		{
			if(pos==1)
			{
		      p->next=list;
			  list=p;	
			}
			else
			{
				for(i=1, q=list ; i<pos-1 && q->next!=NULL ; i++ , q=q->next)
			                	;
				p->next=q->next;
				q->next=p;
			}
		}
		
}


void deleteatbetween()
{
		int i,pos=1;
		struct node *p,*q;
		if(list==NULL)
		{
			list=p;
		}
		if(list->next==NULL)
		{
			free(list);
			list=NULL;
		}
		else
		{
			if(pos==1)
			{
				p=list;
				list=list->next;
				p->next=NULL;
				free(p);
			}
			else
			{
				for(i=1, q=list; i<pos-1 && q->next!=NULL ; i++, q=q->next)
				                    ;
				    
				    if(q->next!=NULL)
				    {
				    	p=q->next;
				    	q->next=q->next->next;
				    	p->next=NULL;
				    	free(p);
					}
			}
		}
	}
	

void count()
{
	int count=0;
	struct node *p;
	p=list;
	while(p!=NULL)
	{
		count++;
		p=p->next;
	}
	printf("number of nodes-%d",count);
}
int main()
{
	int ch,n,e,f,h;
	
	while(1)
	{
		printf("1. insert at begin\n");
		printf("2. delete at begin\n");
		printf("3. insert at end\n");
		printf("4. delete at end\n");
		printf("5. insert at between\n");
		printf("6. delete at between\n");
		printf("7.count\n");
		printf("8. display\n");
		scanf("%d",&ch);
		
	    	switch(ch)
	    	{
	    		case 1:printf("enter the value-");
	    		       scanf("%d",&n);
	    		       insertatfront(n);
					   break; 
			    case 2:deleteatbegin();
					   break; 
				case 3:printf("enter the value-");
				       scanf("%d",&e);   
			           insertatend(e);
				       break; 	
				case 4:deleteatend();
				       break;
			    case 5:printf("enter the position-");
				       scanf("%d",&f);
				       printf("enter the data-");
				       scanf("%d",&h);
					   insertatbetween(f,h);
					   break;
			    case 6:deleteatbetween();
				       break;
				case 7:count();
				       break;	   	       
	    		case 8:display();
	    		       break;
			}
	}
}

	

