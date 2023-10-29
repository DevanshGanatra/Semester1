//Get 10 numbers from user print count of odd, even numbers. 
#include<stdio.h>
void main()
{
	int n,sumO=0,sumE=0,i=1;
	while(i<=10)
	{
		printf("enter any integer:  ");
		scanf("%d",&n);
		if(n%2==0)
		{
			sumE=sumE+n;
		}
		else
		{
			sumO=sumO+n;
		}
		i++;
	}
	printf("%8d=Sum of Even numbers ",sumE);
	printf("%8d=Sum of Odd numbers ",sumO);
}
