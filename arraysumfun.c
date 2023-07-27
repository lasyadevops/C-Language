#include<stdio.h>
#include<stdlib.h>


 float sumoftwoelementsfun(float numb[]);

int main()

{
	float result,num[]={21.7,45,64,7,74,63.2};
          system("clear");

result= sumoftwoelementsfun(num);
		  printf("result of two elements are %.2f \n\n\n",result);
	  return 0;
}
          float sumoftwoelementsfun(float num[])
{
	float sum=0.0;
	for(int i=0;i<6;i++)
	{
		sum+=num[i];
	}
}



