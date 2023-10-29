//Print sum of 1 to n numbers. 
#include<stdio.h>
void main()
{
	int n,i=1,sum=0;
	printf("enter integer ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
