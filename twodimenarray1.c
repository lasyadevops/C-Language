#include<stdio.h>
#include<stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void main()
{
        int matrix[MAXROW][MAXCOL];
        int i,j,x,y,c,r;
        system("clear");
        printf("\n enter 1st matrix  rows :");
        scanf("%d",&r);
        printf("\n enter 1st matrix  columns :");
        scanf("%d",&c);
	 printf("\n enter 2nd matrix  rows :");
        scanf("%d",&x);
        printf("\n enter 2nd matrix  columns :");
        scanf("%d",&y);
	printf("\n enter the 1st matrix elements: \n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("\n enter element [%d][%d] :",i,j,j+1);
                        scanf("%d",&matrix[i][j]);
                }
	       }
	 printf("\n enter the 2nd matrix elements: \n");
        for(i=0;i<x;i++)
        {
                for(j=0;j<y;j++)
                {
                        printf("\n enter element [%d][%d] :",i,j,j+1);
                        scanf("%d",&matrix[i][j]);
                }
               }

        printf("\n 1st matrix out is : \n");
        for(i=0;i<r;i++)
        {
                 for(j=0;j<c;j++)
                 {
         printf("%d\t",matrix[i][j]);
                                                                                        
		 }
		 printf("\n");
	

	}
	 printf("\n 2nd matrix out is : \n");
        for(i=0;i<x;i++)
        {
                 for(j=0;j<y;j++)
                 {
         printf("%d\t",matrix[i][j]);

		 }
	}
 printf("\n");


}
