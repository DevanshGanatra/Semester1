// Check whether the given number is palindrome or not
#include<stdio.h>
void main()
{
	int n,a,sum=0;
	printf("enter any integer ");
    scanf("%d",&n);
    a=n;
    while(n>0)
    {
    	sum=(sum*10)+(n%10);
    	n=n/10;
	}
	if(sum==a)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not pallindrome");
	}
}
