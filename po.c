#include<stdio.h>
struct emp
{
int eno;
char name;
float sal;
};
void main()
{
char *cp;
int *ip;
struct emp *sep;
printf("size %d",sizeof(cp));
printf("\nsize %d",sizeof(ip));
printf("\nsize %d\n",sizeof(sep));
//printf("size %d",sizeof(cp));
}
