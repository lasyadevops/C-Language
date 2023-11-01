#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,d;
	system("clear");
	printf("\n 1.Leapyear");
	printf("\n 2.evenodd");
        printf("\n 3.naturalsum");
        printf("\n 4.tables");
	printf("\n enter your option");
	scanf("%d",&a);
	switch(a)
	{        
	        case 1:
		
		
{
        int year;
	system("clear");
	printf("\n enter an year");
	scanf("%d",&year);
	if(year%400==0)
	{
	printf("\n given year is leapyear %d",year);
	}
	else
	{
	if(year%100==0)
        printf("\n given year is leapyear %d",year);
	}
        if(year%4==0)
	{
		printf("\n given year is leapyear %d",year);
	}
		else
	printf("\n given year is not a leapyear %d",year);
	
}
break;
          case 2:
              
{
	int number;
	system("clear");
	printf("\n enter any one number");
	scanf("%d",&number);
	if(number%2==0)
	{ 
		printf("\n given number is even %d\n");
	}
	else
	{
	printf("\n given number is odd %d\n");
	}
}
break;
           case 3:
	          	  
{
	int i,number;
	system("clear");
	printf("\n enter how many numbers you want to print\n");
	scanf("%d",&number);
	for(i=0;i<=number;i++)
	{
		printf("\n the natural numbers %d\n");
	}
}
break;
          case 4:

{
	int i,j,table;
	system("clear");
	printf("\n enter how many tables you need to print \n");
	scanf("%d",&table);
	for(i=2;i<=table;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("\n%d*%d=%d\n",i,j,i*j);
		}
		printf("\n");
	}
}
}
}
