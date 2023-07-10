#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,temp;
	system ("clear");
	printf("\n enter a first number");
	scanf("%d",&n1);
	printf("\n enter second number");
	scanf("%d",&n2);
	temp=n1;
	n1=n2;
	n2=temp;
        printf("\n %d is after swapping \n",n1);
	printf("\n %d is after swapiing \n",n2);
}	
