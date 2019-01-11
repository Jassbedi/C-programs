#include<stdio.h>
int  main()
{
int i,j,temp;
int a[50] ={1,3,7,2,4,9,100,5,6,8};
for(i=0;i<10;i++)
{
  //printf("%d\n",a[i]);
for(j=i+1;j<10;j++)
{
printf("%d\n",a[i]);
if(a[j] > a[i])
{

temp=a[i];
//printf("\n%d\n",a[i]);
//printf("\n%d\n",a[j]);
a[i] = a[j];
//printf("%d\n",a[i]);
a[j] = temp;
//printf("%d\n",a[i]);

}
}
}
printf("sorting element list\n");
for(i=0;i<10;i++)
{
printf("%d\n",a[i]);
}
}
