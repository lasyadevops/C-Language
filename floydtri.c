#include<stdio.h>
#include<stdlib.h>
void main()
{
  int a,c,i,n;
system("clear");
printf("\n enter how many rows of floyd to print");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(c=1;c<=i;c++)
{
printf("%d",&c);
a++;
}
printf("\n");
}
}
