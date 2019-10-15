#include<stdio.h>
int main()
{
int x=10,y=20,temp;
  printf("before swaping:\n %d\t%d",x,y);
    temp=x;
     x=y;
     y=temp;
    printf("\nafter swaping:\n %d\t%d",x,y);
return 0;
}
