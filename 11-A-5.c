//Find factorial of the given number
#include<stdio.h>
void main()
{
	int n,i;
	printf("enter integer:");
	scanf("%d",&n);
	int ans=n;
	for(i=1;i<n;i++)
	{
		ans=ans*(n-i);
	}
	printf("ans:%d",ans);
	
}

