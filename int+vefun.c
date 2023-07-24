#include<stdio.h>
#include<stdlib.h>

void checkprimenumber();

int main()
{
	checkprimenumber();
		return 0;
}
void checkprimenumber()
{
	int n,i,flag=0;
	system("clear");
	printf("\n enter any positive number :");
	scanf("%d",&n);
	if (n==0 ||n==1)
		flag=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=1;
break;
	}
}
if(flag==1)
	printf("\n given number is not a prime %d\n\n",n);
	else
	 printf("\n given number is a prime %d\n\n",n);
	 }


