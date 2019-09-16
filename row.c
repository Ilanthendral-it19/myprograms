#include <stdio.h>

int main()
{
  int i,j,k=1,row,col;
   printf("enter the row:");
   scanf("%d",&row);
   printf("enter the coloumn:");
   scanf("%d",&col);
   
   for(i=1;i<=row;i++)
{      

    for(j=1;j<=col;j++)
    {
        printf("%d\t" , k);
        k++;
    }
    
    printf("\n");
}
  
   

    return 0;
}


