#include <stdio.h>

int power(int, int);

int main()
{
    int number,pow;

    printf("Enter a number and power : ");
    scanf("%d %d", &number, &pow);

    printf("Result: %d", power(number, pow));
    return 0;
}

int power(int base, int num)
{
   if (num == 0)



   return 1;


  else

      return base * power(base, num - 1);



}
