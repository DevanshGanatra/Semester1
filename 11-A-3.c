//Print multiplication table of a given number. 
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter integer:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d",n,i,(n*i));
		printf("\n");
	}
}
