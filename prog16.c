#include <stdio.h>
int main() {
    int n,i,sum=0;
printf("enter the of the nth number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
  sum=sum+i;
}
printf("sum of the   n numbers:%d",sum);
   return 0;
}
