#include<stdio.h>
#include<stdlib.h>
void main()
{
	int arr[80],size,product,sum,i;
	system("clear");
	printf("\n enter how many values you want : ");
	scanf("%d",&size);
        printf("\n enter %d elements:");
		for(i=0;i<=size;i++)
		{
			printf("\n enter%d elements:",i);
			scanf("%d",&arr[i]);
		}
               sum=0;
               product=1;   
	printf("\n the sum of one-dimensional arry elements are " );
        for(i=0;i<size;i++)
	{
		sum=sum+arr[i];
		product=product*arr[i];
		printf("\n%d\n",arr[i]);
	}
	printf("\n sum of arrays is : %d\n",sum);
	 printf("\n  product of arrays is : %d\n",sum);
}

