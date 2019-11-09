#include<stdio.h>
int main()
{
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
printf("enter the row:");
scanf("%d",&r);
printf("enter the coloumn:");
scanf("%d",&c);
printf("enter the matrix elements");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix:");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf(" %d ",&b[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k=c;k++)
{
mul[i][j]+=a[i][j]*b[k][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",mul[i][j]);
}
printf("\n");
}
return 0;
}
