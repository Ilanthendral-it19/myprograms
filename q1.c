#include <stdio.h>
int main() {
int i,n,a[100];
printf("enter the size of the array:");
scanf("%d",&n);
printf("enter the array elements:");
    
for(i=0;i<n;i++)

{
scanf(" %d",&a[i]);

}
for(i=n-1;i>=0;i--)
{
printf("%d",a[i]);
}

    return 0;
}
