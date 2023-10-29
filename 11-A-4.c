// Calculate x^y without using power function
#include<stdio.h>
void main()
{
	int x,y,i,ans=1;
	printf("enter integer x and y:");
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++)
	{
		ans=ans*x;
	}
	printf("ans:%d",ans);
}

