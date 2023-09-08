//Input an integer number and check the last digit of number is even or odd
#include<stdio.h>
void main()
{
	int a;
	printf("enter any integer: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("last digit is even ");
	}
	else
	{
		printf("last digit is odd ");
	}
}
