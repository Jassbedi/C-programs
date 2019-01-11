#include<stdio.h>

    int add(int x,int y)
    {
      int z;
      z=x+y;
      return z;
    }
    int multiple(int x,int y,int z)
    {
      int w;
      w=x*y*z;
      return w;
    }
    int main()
      {
        int r1,r2,r3,r4;
        int (*ptr) (int, int);
int (*btr) (int ,int ,int);
        ptr=&add;

        r3=ptr(10,20);
        printf("a=%d",r3);
        btr=&multiple;
        r4=btr(1,2,3);
        printf("b=%d",r4);

      }
