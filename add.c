#include<stdio.h>
#include<stdlib.h>


	int add(int a,int b)
{
	int c;
	c=a+b;
	return(c);
}
void main()
{
	int x,y;
	x=10;
	y=5;
	int z=add(x,y);
	printf("\n the sum of two values are %d",z);
}
