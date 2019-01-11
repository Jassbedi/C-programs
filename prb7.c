#include<stdio.h>
int main()
{
int var;
int p;
int **pp;
int ***ppp;
var=3000;
p=&var;
pp=&p;
ppp=&pp;
printf("%d ",var);
}
