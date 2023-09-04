//print avg of 3 no. using scanf
#include<stdio.h>
void main()
{
	int a,b,c,avg;
	printf("enter an integer value: ");
	scanf("%d",&a);
	printf("enter an integer value: ");
	scanf("%d",&b);
	printf("enter an integer value: ");
	scanf("%d",&c);
	avg=(a+b+c)/3.0;
	printf("Avg is =%d",avg);
}
