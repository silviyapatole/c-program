#include<stdio.h>
#include<stdlib.h>

struct node{


	struct node *prev;
	struct node *next;
	int data;
};

struct node *head;

void insertion_beginning()  
{  
   struct node *ptr;   
   int item;  
   ptr = (struct node *)malloc(sizeof(struct node));  
   if(ptr == NULL)
   {  
       printf("\nOVERFLOW");  
   }  
   else  
   {  
    printf("\nEnter Item value");  
    scanf("%d",&item);  
      
   if(head==NULL)  
   {  
       ptr->next = NULL;  
       ptr->prev=NULL;  
       ptr->data=item;  
       head=ptr;  
   }  
   else   
   {  
       ptr->data=item;  
       ptr->prev=NULL;  
       ptr->next = head;  
       head->prev=ptr;  
       head=ptr;  
   }  
   printf("\nNode inserted\n");  
} 
}


void deletion_beginning()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW");  
    }  
    else if(head->next == NULL)  
    {  
        head = NULL;   
        free(head);  
        printf("\nnode deleted\n");  
    }  
    else  
    {  
        ptr = head;  
        head = head -> next;  
        head -> prev = NULL;  
        free(ptr);  
        printf("\nnode deleted\n");  
    }  
  
}  

void display()  
{
    struct node *ptr;  
    printf("\n printing values...\n");  
    ptr = head;  
    while(ptr != NULL)  
    {  
        printf("%d\n",ptr->data);  
        ptr=ptr->next;  
    }  
}   

int main()
{
	int choice;
	while(1)
	{
		printf("\n****main menu****\n");
		printf("\nchoose option\n");
		printf("\n1.insert at begin");
		printf("\n2.delete at end");
		printf("\n3.display");
		printf("\nenter your choice?\n");
		scanf("\n%d",&choice);
		switch(choice)
		{
			case 1:insertion_beginning();
			       break;
			case 2:deletion_beginning();
			       break;
			case 3:display();
			    	break;
		}
	}
}
