//Print all integer greater than 100 and less than 200 that are divisible by 7 but not divisible by 5. 
#include<stdio.h>
void main()
{
	int n=100;
	while(n<=200)
	{
		if(n%7==0)
		{
			if(n%5!=0)
			{
				printf("%d",n);
				printf("\n");
			}
		}
		n++;
	}
}
