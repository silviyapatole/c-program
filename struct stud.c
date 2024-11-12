struct stud{
	int roll;
	 char name[20];
	 int marks[3];
	 int percentage;
};
#include <stdio.h>
int main()
{
	struct stud s[10];
	int i,total=0,n,per,j;
	 printf("how much student you want to enter-");
	 scanf("%d",&n);
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("\nenter name of student-%d",i+1);
	 	scanf("%s",&s[i].name);
	 	
	 	printf("\nenter roll no of student-%d",i+1);
	 	scanf("%d",&s[i].roll);
	 	total=0;
	 	
	 	for(j=0;j<3;j++)
	 	{
	 		printf("\nenter marks of student-%d",i+1);
	 		scanf("%d",&s[i].marks[j]);
	 		total=(total+s[i].marks[j]);
		 }
		 per=total/3;
		 s[i].percentage=per;
	 }
	 //display 
	 for(i=0;i<n;i++)
	 {
	 	printf("\nroll no-%d",s[i].roll);
	 	printf("\nname-%s",s[i].name);
	 	
	 	for(j=0;j<3;j++)
	 	{
	 		printf("\nmarks of subject-%d is %d",i+1,s[i].marks[j]);
		 }
		 printf("\npercentage-%d",s[i].percentage);
	 }
}
