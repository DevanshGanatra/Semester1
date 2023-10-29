//Print the Fibonacci Series
//0,1,1,2,3,5,8,......
#include<stdio.h>
void main()
{
	int a=0,b=1,i,j,n;
	printf("enter integer:");
	scanf("%d",&n);
	printf("0\n1\n");
	for(i=3;i<=n;i++)
	{
	  j=a+b;
	  printf("%d\n",j);
	  a=b;
	  b=j;	  
	}
}
