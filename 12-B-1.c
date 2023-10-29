// Find the sum of 1 + (1+2) + (1+2+3) + (1+2+3+4) + …+ (1+2+3+4+…. +n). 
#include<stdio.h>
void main()
{
int i,j,n,sum=0;
printf("enter value of n: ");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		sum=sum+j;
	}
}
printf("sum= %d",sum);
}
