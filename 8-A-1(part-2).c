//Print 1 to 10 then modify program Print 1 to n using while and do while loop. 
#include<stdio.h>
void main()
{
	int n=1,N;
	printf("enter integer:");
	scanf("%d",&N);
	do
	{
		printf("\n%d",n);
		n++;
	}
	while(n<=N);
}
