#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,t1=0,t2=1,nextnumber=t1+t2;
	system("clear");
	printf("\n enter any size of number");
	scanf("%d",&n);
	printf("\n the fibonacci series is %d %d",t1,t2);
	for(i=2;i<=n;i++)
	{
		printf("%d",nextnumber);
	        t1=t2;
		t2=nextnumber;
		nextnumber=t1+t2;
	}
}
