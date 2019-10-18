#include <stdio.h>
int main()
{
int  i,a[5]={1,2,3,4,5},n,count=0;
printf("enter the element to find:");
scanf("%d",&n);
for(i=0;i<5;i++)
{
  if(n==a[i])
{
   printf("element %d is found" ,n);
}
}
for(i=0;i<5;i++)
{
 if(n!=a[i])
{
count++;
}
}
 if(count==5)
{
 printf("element %d is not found" ,n);
}
return 0;
}
