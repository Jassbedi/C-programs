#include<stdio.h>
//#include<conio.h>

//declaring the recursive function
/*int sumOfDigit(int num);

int  main()
{
    int num, sum;
    //clrscr();
    printf("Enter a number:\t");
    scanf("%d", &num);
    sum = sumOfDigit(num);
    printf("The sum of digits of %d is: %d", num, sum);

}

int sumOfDigit(int num)
{
    int s, a;
    s = s + (num%10);
    a = num/10;
    if(a > 0)
    {
        sumOfDigit(a);
    }
    return s;
}
*/
#include <stdio.h>
int fact (int);
int main()
{
    int n,f;
    printf("Enter the number whose factorial you want to calculate?");
    scanf("%d",&n);
    f = fact(n);
    printf("calculate = %d",f);
}
int fact(int n)
{
    int remainder;
    int sum,t;
    while (n != 0)
  {
     remainder = n % 10;
     sum       = sum + remainder;
     n         = n / 10;
  }

  printf("Sum of digits of %d = %d\n", n, sum);

  return 0;
  }
