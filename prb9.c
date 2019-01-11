#include<stdio.h>
int main()
{
int arr[5]={1,2,3,4,5};
int large,i;
for(i=1;i<5;i++)
{
if(arr[i]>large)
{
large = arr[i];
}
}
printf("large %d",large);
}
