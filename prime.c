#include<stdio.h>
#include<stdlib.h>
void main()
{
   int i,j,n,fact;
   system("clear");
   printf("\n enter the range of values");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
	fact=0;
     for(j=1;j<=n;j++)
     {
	     if(i%j==0)
		     fact++;
     }
       if(fact==2)
   printf("%d,\t",i);
   } 
}   
