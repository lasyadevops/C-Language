#include<stdio.h>
#include<stdlib.h>
void displaystring(char c[]);
int main()
{
	char c[50];
	system("clear") ;
	printf("\n enter any string : ");
        fgets(c,sizeof(c),stdin);
	displaystring(c);
	return 0;
}
void displaystring(char c[])
{
	 printf("\n string output is : ");
	 puts(c);
}

