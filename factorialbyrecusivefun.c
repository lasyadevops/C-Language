#include<stdio.h>
#include<stdlib.h>

int factorial(int number);
int main()
{
	int x=10;
	system("clear");
	printf("\n the factorial number of %d is %d\n ",x,factorial(x));
	return 0;
}
int factorial(int number)
{

	if(number==1)
		return(1);
	else
		return(number * factorial(number -1));
}

