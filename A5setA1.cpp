#include <stdio.h>
#include<conio.h>
struct employee
{
char    name[30];
int     empId;
float   salary;
};
int main()
{
struct employee emp;
printf("\nEnter details :\n");
printf("Name :");  
gets(emp.name);
printf("ID :");            
scanf("%d",&emp.empId);
printf("Salary :");        
scanf("%f",&emp.salary);
printf("\nEntered detail is:\n");
printf("Name: %s\n",emp.name);
printf("Id: %d \n",emp.empId);
printf("Salary:%f\n",emp.salary);
getch();
return 0;
}

