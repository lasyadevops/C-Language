#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	system ("clear");
	printf("\n Enter A value");
	scanf("%d",&a);
	printf("\n Enter B value");
	scanf("%d",&b);
        printf("\n Enter C value");
       	scanf("%d",&c);
        if(a>b && a>c)
	printf("\n A is big %d\n",a);
	else if (b>c && b>a)
	printf("\n B is big %d\n",b);	
	else if(c>a && c>b)
	printf("\n C is big %d\n",c);
        else if(a==b==c)
	printf("\n A,B,C are equal %d %d %d\n",a,b,c);	
}

