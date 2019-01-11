#include<stdio.h>
int main()
{
int no;
printf("enter your number to fail or pass and check grades in mathes:");
scanf("%d",&no);
if(no > 30 && no <=40)
{
    printf("you are score grade is: C\n");
}
else if(no > 40 && no <= 60 )
{
  printf("you are score  is :B\n");
}
else if(no >60 && no <=80)
{
    printf("you are score is: B+\n");
}
else if(no <100 && no >90)
{
  printf("your score is A+\n");
}
else
{
  printf("you are fail\n");
}
return 0;
}
