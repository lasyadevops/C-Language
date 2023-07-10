#include<stdio.h>
#include<stdlib.h>
void main()
{
          int numb1,numb2;
  system("clear");
  printf("\n enter first number ");
  scanf("%d",&numb1);
  printf("\n enter second number ");
  scanf("%d",&numb2);
  if(numb1 !=numb2)
  {
	  if(numb1>numb2)
	  {
	  printf ("\n first number is greater than second number %d\n",numb1);
	  }
	  else
	  {
          printf("\n second number is greater than first number %d\n",numb2);
	  }
   }      
   else
	   printf("\n both numbers are equal %d and %d \n",numb1,numb2);
}

