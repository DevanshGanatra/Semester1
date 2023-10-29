// Calculate sum of two numbers using pointer
#include<stdio.h>
void main()
{
	int a,b,*x=&a,*y=&b;
	printf("enter two integers: ");
	scanf("%d %d",&a,&b);
	printf("%d",*x+*y);
	
}
