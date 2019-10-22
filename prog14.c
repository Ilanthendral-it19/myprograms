#include <stdio.h>
int main() {
int x,y,z;    
    printf("enter  three value:\n");
 scanf("%d %d %d",&x,&y,&z);
if(x>y&&x>z)
 printf("the greatest value is %d", x);
else if(y>z)
printf("the greatest value is %d", y);
else
printf("the greatest value is %d", z);
 
 return 0;
}
