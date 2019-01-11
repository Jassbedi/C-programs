#include<stdio.h>
int main()
{
  int a,b,c;
  printf("\nenter the number of a:");
  scanf("%d",&a);
  printf("\nenter the number of b:");
  scanf("%d",&b);

  printf("\nenter the number of c:");
  scanf("%d",&c);

  if(a>b && a>c)
  {
    printf("a is greater than");
  }
  if(b>a && b>c)
  {
    printf("b is greater than");
  }
  if(c>b && c>a)
  {
    printf("c is greater than");

  }
  if(a==b && b == c && c==a)
  {
    printf("all ni are equaL");
  }


return 0;


}
