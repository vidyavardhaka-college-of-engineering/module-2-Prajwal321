#include <stdio.h>
int main ()
{
 int a=10,sum = 0,i,n;
 scanf("%d",&n);
for(i=1;i<=n;i++)
 {
   
   if ( i % 2 == 0 )
      continue;
  sum = sum + i;
  }
printf("%d",sum);
 return 0;
}
