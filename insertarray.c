#include<stdio.h>
int main()
{
int arr[50],n,i,key,loc;
printf("enter the size  ");
scanf("%d",&n);
printf("Enter %d element",n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter element of insert");
scanf("\n%d",&key);

printf("Enter the location to insert");
scanf("%d",&loc);


key=100;
loc=2;
for(i=n-1; i>loc; i--)
{
arr[i+1] =arr[i];
}


}
