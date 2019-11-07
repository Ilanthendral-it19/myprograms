#include <stdio.h>
int main() {
  int a[10][10],r,c,i,j,max=0;
    printf("enter the row:\n");
    scanf("%d",&r);
    printf("enter the coloumn:\n");
    scanf("%d",&c);
    printf("enter the matrix elements:");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    
    
    max=a[0][0];
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                
            }
        }
    }
     printf("the largest no is:%d",max);
    
    return 0;
}
