//Multiply and divide a number by 2 without using multiplication/division operator. 
#include<stdio.h>
void main()
{
	int a,mul,div;
	printf("enter any integers: ");
	scanf("%d",&a);
	mul=a<<1;
	div=a>>1;
	printf("mul=%d",mul);
	printf("div=%d",div);
	
}
