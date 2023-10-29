/*
5 
54 
543 
5432 
54321 
*/
#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",n);
			n--;
		}
		n=5;
		printf("\n");
		
	}
}
