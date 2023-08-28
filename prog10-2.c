//swap two no. without using temerary variable
#include<stdio.h>
void main()
{
	int a,b;
	printf(" Enter the values of A and B :");
	scanf("%d %d",&a,&b);// let a=5 and b=10 for e.g.
	a=a+b; // a=15(for example)
	b=a-b;// b=5
	a=a-b;//a=10
	printf("values of a=%d,b=%d",a,b);
}
