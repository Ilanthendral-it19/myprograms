#include<stdio.h>
int main()
{
int i,n,fact=n;
  printf("enter a number");
scanf("%d",&n);

for(i=n-1;i>=1;i--)
{
   fact=fact*i;
}
printf("%d",fact);
return 0;
}        

