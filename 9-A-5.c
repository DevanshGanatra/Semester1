//Find factors of the given number
#include<stdio.h>
void main()
{
	int n,i=1;
	printf("enter any integer: ");
	scanf("%d",&n);
	printf("its factors are :");
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d",i);
			printf(" ");
		}
		i++;
	}
}
