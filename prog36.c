#include<stdio.h>
int main()
{
char a;
scanf("%c",&a);
if(a>='a'&&a<='z'||a>='A'&&a<='Z')
{
  printf("\n alphabet");
}
else
{
printf("number");
}

return 0;
}
