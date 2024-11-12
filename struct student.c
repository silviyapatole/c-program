struct student{
	int roll;
	char name[20];
	int per;
};
#include <stdio.h>
int main()
{
	struct student s;
	printf("enter name of student-");
	scanf("%s",&s.name);
	
	printf("enter roll no-");
	scanf("%d",&s.roll);
	
	printf("enter per-");
	scanf("%d",&s.per);
	
	printf("\ninfo of students are-");
	printf("\n%d",s.roll);
	printf("\n%s",s.name);
	printf("\n%d",s.per);
}
