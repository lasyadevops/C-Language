#include<stdio.h>
#include<stdlib.h>

void main()
{
	char c[40];
	system("clear");
	printf("\n enter any string ; " );
	fgets(c,sizeof(c),stdin);
	printf("\n given string is \n\n\n");
	puts(c);
}


