#include<stdio.h>
int main()
{


int n,r,j = 0,pr;
int choice = 1;

while(choice == 1)
{
printf("enter the number=");
scanf("%d",&n);
pr=n;
while(n>0)
{
r=n%10;
j=(j*10)+r;
n=n/10;
}
if(pr == j)
{
printf("palindrome number ");
}
else
{
printf("not palindrome");
return 0;}
}
printf("choice to one continue and choice two for exit");
scanf("%d",&choice);

}
