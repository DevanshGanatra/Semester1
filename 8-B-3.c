// Print first 50 numbers in series 1, 4, 7, 10… 
#include<stdio.h>
void main()
{
	int n=1,i=1;
	while(i<=50)
	{
		printf("%d",n);
		n=n+3;
		i++;
		printf(" ");
	}
}
