//Check whether the given number is perfect or not
// perfect no.= that no. which's sum of factors is no. itself
#include<stdio.h>
void main()
{
	int n,sum=0,i=1;
	printf("enter any integer ");
    scanf("%d",&n);
    while(i<n)
    {
    	if(n%i==0)
    	{
    		sum=sum+i;
		}
		i++;
	}
	if(n==sum)
	{
		printf("its perfect ");
	}
	else
	{
		printf("its not perfect ");
	}
}
