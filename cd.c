#include<stdio.h>
int main()
{
int *p1,i=25;
void *p2;
p1=&i;
p2=&i;
p1=p2;
p2=p1;
printf("%d",i);
}
