#include<stdio.h>
//#include<conio.h>
int main()
{
  float pi = 3.14, r,l,b,s,area;
  int i;
  int choice = 1;

  while (choice == 1) {
    printf("Please choice any one in this type's to calculate area");
    printf("\n1) Circle \n2) Rectangle \n3) Square");
    printf("\nEnter your choice: ");
    scanf("%d",&i);
    switch(i)
    {
      case 1:
        printf("Enter the radius of circle=");
        scanf("%f",&r);
        area = pi*r*r;
        printf("%f",area);
        break;

      case 2:
        printf("Enter the  Rectangle length= ");
        scanf("%f",&l);
        printf("\nEnter the  Rectangle breath= ");
        scanf("%f",&b);
        area=l*b;
        printf("%faraa",area);
        break;

      case 3:
        printf("Enter the side  Square= ");
        scanf("%f",&s);
        area=s*s;
        printf("%f",area);
        break;
    }
    printf("\ndo you want to continue (1/2): ");
    scanf("%d",&choice);
  }

}
