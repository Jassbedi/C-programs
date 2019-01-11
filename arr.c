#include<stdio.h>
#include<string.h>
int  main()
{
int i,j;
int temp;
char arr[12];

printf("enter the String = ");
gets(arr);
j=strlen(arr);
while(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;

}
printf("%s\n %d",j,arr);
}
