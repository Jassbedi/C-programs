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
    if(k!=0)//if i use an if its fine but while loop does not work
    {
        r=k%10;
        sum = sum*10+r;
        Check_Pal(k/10);
    }
    printf("func call of r %d\n", r);
    return sum;
}
