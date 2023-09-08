//Check whether the given number is odd or even using bitwise operator
#include<stdio.h>
void main()
{
	int a;
	printf("enter any integer: ");
	scanf("%d",&a);
	if(a&1==1)
	{
		printf("its odd");
	}
	else
	{ 
	    printf("its even");
	}
}
