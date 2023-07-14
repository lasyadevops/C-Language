#include<stdio.h>
#include<stdlib.h>
#define MAXROW 10
#define MAXCOL 10

void main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c;
	system("clear");
	printf("\n enter number of rows :");
	scanf("%d",&r);
	printf("\n enter how many columns :");
	scanf("%d",&c);
	printf("\n enter the matrix elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n enter element [%d] [%d] :",i,j,j+1);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("\n matrix out is : \n"); 
	for(i=0;i<r;i++)
	{
		 for(j=0;j<c;j++)
		 {
	 printf("%d\t",matrix[i][j]);
	 
		 }
		 printf("\n");
	 }
	 }
               
      
