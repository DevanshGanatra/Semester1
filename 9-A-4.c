//Find factorial of the given number
#include<stdio.h>
void main()
{
	int n,i=1,ans=1;
	printf("enter any integer: ");
	scanf("%d",&n);
	while(i<=n)
	{
		ans=ans*i;
		i++;
	}
	printf("its factorial= %d",ans);
}
