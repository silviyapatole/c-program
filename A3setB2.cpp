#include<stdio.h>
#include<string.h>
int main()
{
int c = 0;
char ch, s[100];
printf("Input a string:\n");
gets(s);
for(c=0;s[c] != '\0';c++) {
ch = s[c];
if (ch >= 'A' && ch <= 'Z')
s[c] = s[c] + 32;
else if (ch >= 'a' && ch <= 'z')
s[c] = s[c] - 32;
else if(s[c]==' ')
s[c] = '*';
else if(s[c]>0 || s[c]<9)
s[c] = '?';
}
puts(s);
return 0;
}

