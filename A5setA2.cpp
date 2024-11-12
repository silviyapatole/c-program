#include<stdio.h>
int main()
struct library_book;
int id;
char title[80],publisher[20];
int code;
 union u
{
int no_of_copies; 
char month[10];
 int edition;
}
 info;
intcost,
};
void main()
{
struct library_book book 1;
printf("\n Enter the details of the book \n");
printf("\n Enter the id, title and publisher \n"); 
scanf("%d%s%s", &book1.id, book1.title, book1.publisher);
 printf("\nEnterthecode: 1-TextBook, 2-Magazine, 3-Reference");
 scanf("%d",book I.code);
switch(book1.code)
case 1: printf("Enter the number of copies:"); 
scanf("%d",&book1.info.no of copies); 
break;
 case2: 
printf("Enter the issue month name:");
 scanf("%s", book1.info.month); 
break;
 case3:
 printf("Enter the editionnumber:"); 
scanf("%d",&book1.info.edition); 
break;
}
printf("Enter the cost:"); 
scanf("%d",&book1.cost);
printf("\n id %d", book 1.id);
printf("n Title %s", book1.title);
printf("\n Publisher %s", book1.publisher);
switch(book1.code)
{
case 1:printf("Copies %d:",book1.info.no of copies);
break;
case2: printf("Issue month name=%s", book1.info.month);
break;
case3:printf("Edition number=%d:",book1.info.edition);
break
}
printf("\n Cost-%d", book1.cost);
getch();
clrscr();
return 0;
}

