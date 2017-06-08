#include<stdio.h>
int main()
{
int a,i,j,b;
printf("\nEnter the range");
scanf("%d",&a);
for(i=1;i<=a;i++)
for(j=1;j<=a;j++)
{
printf("%d*%d=%d\n",i,j,i*j);
printf("\n");
}
return 0;
}
