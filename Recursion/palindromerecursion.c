#include<stdio.h>



//#include<stdio.h>
int Check_Pal(int);
int main()
{
    int i,sum,n;
    printf("enter no");
    scanf("%d",&n);
    sum=Check_Pal(n);
    if(sum==n)
    {
        printf("palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;
}
int Check_Pal(int k)
{
    int r;
    static int sum=0;
    if(k!=0)
    {
        r=k%10;
        sum = sum*10+r;
        Check_Pal(k/10);
    }
    return sum;
}
