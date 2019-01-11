#include<stdio.h>
void main()
{
int i=100;
int *p;
printf("%u\n",&p);
p=&i;

printf("%u",i);
printf("\n%u",p);
printf("\n%u",&i);
printf("\n%u",&p);
printf("\n%u",*p);
printf("\n%u",*(&i));



}
