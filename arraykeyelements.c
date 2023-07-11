#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,numb[7];
	system("clear");
	printf("\n enter an integer ");
	for(a=0;a<=8;a++)
		{
			scanf("%d",&numb[a]);
		}
printf("\n enter the elements ");
for(b=0;b<=7;b++)
{
	printf("%d ",numb[b]);
}
}
