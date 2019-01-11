#include<stdio.h>
int main()
{
static int i;
printf("%d",i );
for(++i;++i;++i)
{
printf("%d ",i);
if(i==4) break;
}
return 0;
}
