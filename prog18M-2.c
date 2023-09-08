//Input an integer number and check the last digit of number is even or odd
#include<stdio.h>
void main()
{
	//NOTE: for getting last digit of any no. we use modulo 10
	int n,l;
	printf("enter any integer: ");
	scanf("%d",&n);
	l=n%10;
	if(l%2==0)
	{
		printf("last digit is even: ");
	}
	else
	{
		printf("last digit is odd: ");
	}
}
