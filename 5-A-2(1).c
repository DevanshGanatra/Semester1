// swap two no. using temporary variable
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("write the values of A and B :");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf(" values of a=%d,b=%d",a,b);
 } 
