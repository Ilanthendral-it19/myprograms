#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
switch(n/10)
{
case 10:
case 9:
        printf("grade A");
break;
case 8:
case7:
            printf("grade B");
break;
case 6:
case 5:
           printf("grade C");
break;

 default:
    printf("fail");
break;
}
return 0;
}
