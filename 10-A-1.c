// Find out sum of first and last digit of a given number.
#include<stdio.h>
void main()
{
	int n,fd,ld;
	printf("enter any integer.");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10){
		n=n/10;
	}
	fd=n;
	printf("sum of first and last digit:%d",fd+ld);
	
}
