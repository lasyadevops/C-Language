# include<stdio.h>
#include<stdlib.h>
void main()
{
	int number;
	system("clear");

	printf("\n enter a value");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("\n given number is even %d\n",number);
	}
	else
	{
		printf("\n given number is odd %d\n",number);
	}
}	


