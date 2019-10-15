#include<stdio.h>
int main()
{
 char i, a[30];
  scanf("%[^\n]",&a[30]);
for(i=0;i<=30;i++)
{
   printf("%c\n",a[i]);
   printf("%p\n",&a[i]);
}
return 0;
}
