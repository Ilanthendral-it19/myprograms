#include <stdio.h>
int main() {
    int n;
    printf("Enter the table has to print:");
    scanf(" %d",&n);
    for(int i=1;i<=20;i++)
    {
        
        printf("%d x %d = %d\n" ,i,n,i*n);
    }
    return 0;
}
