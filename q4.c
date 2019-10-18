#include <stdio.h>
int main()
{
int i, n,sum=0,av=0;
 printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
av=sum/n;
printf("Average of first %d\n number is:%d ",n, av);
return 0;
}

