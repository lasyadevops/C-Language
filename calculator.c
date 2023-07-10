#include<stdio.h>
#include<stdlib.h>
void main()
{
 char operator;
 double numb1,numb2;
 system ("clear");
 printf("\n enter an operator(+, -, *, /):");
scanf("%c",&operator);
printf("\n enter two operands: ");
scanf("%lf %lf",&numb1,&numb2);
switch(operator)
{	
	case '+':
    printf("\n %.1lf + %.1lf =%.1lf\n\n",numb1,numb2,numb1+numb2);
    break;
	case '-':
    printf("\n %.1lf - %.1lf =%.1lf\n\n",numb1,numb2,numb1-numb2);
    break;
	case '*':
    printf("\n %.1lf * %.1lf =%.1lf\n\n",numb1,numb2,numb1*numb2);
    break;
	case '/':
     printf("\n %.1lf / %.1lf =%.1lf\n\n",numb1,numb2,numb1/numb2);
     break;
     default:
printf("\n error..! given input values are not valid");     
     
}
}
