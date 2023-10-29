//Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop
#include<stdio.h>
void main()
{
	int n,i=1;
	printf("enter integer: ");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i=i+2;
	}
	while(i<=n);
}
