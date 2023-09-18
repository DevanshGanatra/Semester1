// Find out largest number from given 3 numbers using conditional operator. 
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	a>b?a>c?printf("a is largest"):printf("c is largest"):b>c?printf("b is largest"):printf("c is largest");
}
