/*
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
*/
#include<stdio.h>
void main()
{
	int i,j;
	int n;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}

}
