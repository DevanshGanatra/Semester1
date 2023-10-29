//Print sum of 1 to n numbers
#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum:%d",sum);
}
