#include<stdio.h>

struct Emp
{
int no;
char name[20];
float sal;

};
void main()
{
struct Emp e={12,"ravi",50.000};
//printf("size of emp %d",sizeof(e));
//printf("size of struct%d",sizeof(struct Emp));
printf("emp=%d \nemp=%s \nemp=%f\n",e.no,e.name,e.sal);



}
