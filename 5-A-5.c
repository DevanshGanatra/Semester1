// find the largest amongst three no.
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter any integer a,b,c :");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest ");
		}
		else
		{
			printf("c is largest ");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is largest ");
		}
		else
		{
			printf("c is largest ");
		}
	}
}
