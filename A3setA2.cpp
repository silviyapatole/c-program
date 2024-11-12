#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
 {
char str1[1000], str2[1000];
int comparison_result;
printf("Enter the first string: "); 
gets(str1);
printf("Enter the second string: ");
 gets(str2);
strcmp(str1, str2);
if (comparison_result == 0) {
strcat(str1, str2);
 printf("Concatenated string: %s\n", str1);
} 
else if (comparison_result < 0) 
{
strcat(str2, str1);
printf("Concatenated string: %s\n", str2);
}
 else 
{
printf("Length of the first string: %lu\n", strlen(str1));
getch();
return 0;
}
}
