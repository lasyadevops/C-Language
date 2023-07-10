#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n1,n2,n3,n4;
	system("clear");
	printf("\n enter number 1");
	scanf("%d",&n1);
        printf("\n enter number 2");
        scanf("%d",&n2);
        printf("\n enter number 3");
        scanf("%d",&n3);
        printf("\n enter number 4");
        scanf("%d",&n4);
        // pre increment
 	printf("n1 ++n1 %d = ",n1++);
        //post decrement
	printf("n2 %d = ",n2--);
        //pre decrement  
	printf("n3 --n3 %d = ",n3--);
        //post increment
	printf("n4 %d = ",n4++);

}	
