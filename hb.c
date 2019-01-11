#include<stdio.h>
//#include<conio.h>
int main()
{
int i;
float area,pi=3.14,l,b,s,r;
printf("Find the Area ");
printf("1)Area of Circle  2)Area of Rectangle 3)Area of Square=");
scanf("%d",&i);
switch(i)
{
case 1:
printf("Enter area of circle=");
scanf("%f",&r);
area=pi*r*r;
printf("%f area of circle",area);
break;

case 2:
printf("Enter area of Rectangle=");
scanf("%f",&l);
printf("Enter area of breathe=");
scanf("%f",&b);
area=l*b;
printf("%f area=",area);
break;

case 3:
printf("Enter the area of Square=");
scanf("%f",&s);
area=s*s;
printf("%f area of square=",area);
break;

}

}
