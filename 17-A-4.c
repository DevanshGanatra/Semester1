// Swap value of two numbers using pointer
#include<stdio.h>
void main()
{
	int a,*x=&a,b,*y=&b,temp;
	printf("enter two integers:");
	scanf("%d %d",&a,&b);
	temp=*x;
	*x=*y;
	*y=temp;
	printf("%d %d",a,b);
}
