

#include <stdio.h>
int lcm(int lcm_no[], int count);

int main()
{
  int a, b,i, result;
  int lcm_no[100];

  printf("Please enter count of numbers: ");
  scanf("%d",&a);

  for(i=0;i<a;++i)
  {
    printf("\nEnter the %d no =",i+1);
    scanf("%d",&lcm_no[i]);
  }

    result = lcm(lcm_no, a);
    printf("]nThe LCM is: %d", result);
    return 0;
  }

int lcm(int lcm_no[], int count)
{
  int checkcount=0;
  static int c = 1;
  for(int i=0;i<count;i++)
  {
    if(c % lcm_no[i] == 0)
    {
      checkcount++;
    }
  }

  if ( checkcount == count)
  {
      return c;
  }
  c++;
  lcm(lcm_no, count);
  return c;
}
