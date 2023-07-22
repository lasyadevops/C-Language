#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char string1[20],string2[20];
	system("clear");
          printf("\n enter any  one first string : ");
          scanf("%s",string1);
	    printf("\n enter any  one second string : ");
          scanf("%s",string2);
	strcat(string1,string2);
        printf("\n the output is after concatenation %s\n\n",string1);
}
