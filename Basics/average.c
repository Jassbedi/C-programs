#include<stdio.h>
int main()
{

int avg,sum=0;
int marks[5];
int i;
for(i=0;i<=29;i++)
{
printf("Enter marks=");
scanf("%d",&marks[i]);
}

for(i=0;i<=29;i++)
{
avg=sum/5;
printf("\n Average marks=%d",avg);
}


}
