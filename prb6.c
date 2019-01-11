#include<stdio.h>
void main()
{
int i=3;
int *p = &i;
*p = &i;
// *q=p;
printf("%d %d",p,*p);
}
