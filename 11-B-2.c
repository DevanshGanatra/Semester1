//Count frequency of digits in an integer. 
#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter integer:");
	scanf("%d",&n);
	for(i=1;n>0;i++)
	{
		n=n/10;
		count++;
	}
	printf("%d",count);
}
