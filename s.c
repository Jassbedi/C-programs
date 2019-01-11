#include<stdio.h>
int main()
{
    char a[] = "%d\n";
    a[1] = 'b';
    printf(a, 65);
    return 0;

}
