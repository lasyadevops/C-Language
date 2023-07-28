#include<stdio.h>
#include<stdlib.h>

void main()
{
        
        static int b;
        system("clear");
	b=40;
        printf("\n default value of auto variable is %d\n",b);
        b=50;
	printf("\n default value of static variable is %d\n",b);



}

