//print simple interest
#include<stdio.h>
void main()
{
	float p,n,r,si;
	printf("enter p for your simple interest ");
	scanf("%f",&p);
	printf("enter n for your simple interest ");
	scanf("%f",&n);
	printf("enter r for your simple interest ");
	scanf("%f",&r);
	si=(p*n*r)/100.0;
	printf(" simple interest is =%f",si);
}
