#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
        char string1[20],string2[30];
	system("clear");
	printf("\n enter  any one 1st string : ");
	scanf("%s",string1);
	 printf("\n enter  any one 2nd string : ");
        scanf("%s",string2);
        if(strcmp(string1,string2)== 0)
	{
		 printf("\n given strings are equal %s %s\n\n\n ",string1,string2 );
	}
	else
	{
	       	printf("\n given strings are not equal %s %s\n\n\n ",string1,string2 );
	}
}




