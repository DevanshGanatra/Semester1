// Check whether number is even number or odd number using conditional operator
#include<stdio.h>
void main()
{
	int a;
	printf("enter any integer: ");
	scanf("%d",&a);
	a%2==0?printf("integer is even"):printf("integer is odd");
}
