#include <stdio.h>

int power(int, int);

int main()
{
    int x, n;

    printf("Enter a number and power : ");
    scanf("%d%d", &x, &n);

    printf("Result: %d", power(x, n));
    return 0;
}

int power(int base, int num)
{
    if (num == 0)
        return 1;
    else
        return base * power(base, num - 1);
}
