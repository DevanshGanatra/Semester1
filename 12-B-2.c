//Estimate the value of the mathematical constant e.
#include<stdio.h>
void main()
{
	float n,i,j,sum=1,mul=1;
	printf("enter integer ");
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			mul=mul*j;
		}
		sum=sum+(1/mul);
	}
	printf("sum=%f ",sum);
}
