#include<stdio.h>
//#include<string.h>

int StringLength(char[]);

int main()
//int StringLength(char[])

{
char str[30];
 int len;
printf("enter the string => ");
gets(str);
len = StringLength(str);
printf("length od '%d'",len);
}
int StringLength (char x[])
{
  int i=0,count=0;
  while(x[i]! = '\0')
  count++;
  i++;
}
return count;
