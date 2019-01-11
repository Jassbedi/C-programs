#include<stdio.h>
//#include<conio.h>

int main()
{
char sex,ms;
int age;
printf("enter age = ,\n sex= ,\n marital status =");
scanf("%d %c %c",&age,&sex,&ms);

if((ms == 'M' && sex ='M' && age > 3) || (ms == 'U' && sex == 'F' && age > 25))


printf("driver is insured ");

else
{
printf("deriver id uninsured");


}
