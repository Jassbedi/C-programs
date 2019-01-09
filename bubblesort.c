#include<stdio.h>
void main()
{
  int i,j,temp;
  int a[10]={10.23,32,34,54,21,3,45,67,76};
  for(i=0;i<10;i++)
  {
  for(j=i+1;j<10;j++)
  {
  if(a[j]>a[i])
  {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;

  }
  }

  }


  printf("Sort Elements List\n");
  for(i=0;i<10;i++)
  {
    printf("%d",a[i]);
  }

}
