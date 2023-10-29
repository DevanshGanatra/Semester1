//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n. 
#include<stdio.h>
void main()
{
	int n=1,N,sum=0;
	printf("enter any integer: ");
	scanf("%d",&N);
	while(n<=N)
	{
		if(n%2!=0)
		{
		sum=sum+n;
		}
		else
		{
	    sum=sum-n;
		}
		n++;
	}
	printf("ans=%d",sum);
}
