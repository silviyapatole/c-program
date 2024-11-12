#include <stdio.h>
struct student {
	char name[50];
	int rollno;
};
int main()
{
	struct student s;
	printf("enter the name:");
	scanf("%s",&s.name);
	printf("enter the rollno:");
	scanf("%d",&s.rollno);
	
	printf("entered details are");
	printf("name=%s",s.name);
	printf("rollno=%d",s.rollno);
	
}
