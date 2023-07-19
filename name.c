#include <stdio.h>
#include<stdlib.h>
void name();
/*function declaration */
void message();
/*function declaration */
void main()
{ system("clear");
       	name(); 
	message();
} 
void name() 
	/*function definition */
{ printf("Charitha ");
} 
void message () 
	/*function definition */
{
       	name();
       	printf("Hi");
}
