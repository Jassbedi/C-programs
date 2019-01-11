#include<stdio.h>

int main()

{
  int l = 0, array[100], i, number, count = 0, index[100];
  printf("Enter the length of array:");
  scanf("%d",&l);

//  printf("Enter the item ");
  //scanf("%d ",&array[i]);
   for(i = 0; i<l ;i++)
   {
     printf("\n Enter the item in array[%d] :",i);
     scanf("%d",&array[i]);
   }
   printf("\n Enter the number to search :");
   scanf("%d",&number);

   i = 0;
   while( l > i ) {
     if (number == array[i]) {
       index[count] = i;
       count++;
     }
     i++;
   }

   printf("\n %d occurs %d times at index ", number, count);
   if(count == 0)
   {
     printf("number not found\n");
   }
else
{
   for(i = 0; i < count; i++)
   {
     printf("%d", index[i]);
   }
}
   return 0;
   // if(array[i] > l)
   // {
   //    s = l;
   //    l = array[i];
   //  }
   //  else if (array[i]>s && array[i]!=l)
   //  {
   //    s = array[i];
   //  }
   //  printf("largest = %d,\n location no. = %d\n ",l,s);
}
