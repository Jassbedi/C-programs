#include <stdio.h>
int main()
{
  int i, n, t1 = 1, t2 = 1, nextTerm;

  printf("Enter the number of terms: ");
  scanf("%d", &n);
  printf(" Series: ");

  for (i = 0; i < n; ++i)
  {
      printf("%d, ", t1);
      nextTerm = t1 + t2;
      t1 = t2;
      t2 = nextTerm;
  }
  return 0;
}
