/*#include<stdio.h>




void change(int num) {
    printf("Before adding value inside function num=%d \n",num);
    num=num+100;
    printf("After adding value inside function num=%d \n", num);
}
int main() {
    int x=100;
    printf("Before function call x=%d \n", x);
    change(x);//passing value in function
    printf("After function call x=%d \n", x);
return 0;
}*/
#include<stdio.h>
void change(int num)
{


  printf("\nBefore adding value inside functon num=%d\n",num);
  num=num+100;
  printf("\nAfter adding value inside function num=%d \n",num);
}

int main()
{
int  x=100;
  printf("\nbefore function call x=%d",x);
  change(x);
  printf("\nAfter adding value inside function num=%d  ",x);

return  0;
}
