//Calculate (x^y) without using power function. 
#include<stdio.h>
void main()
{
	int x,y,i=1,ans=1;
	{
		printf("enter value of x ");
		scanf("%d",&x);
		printf("enter value of y ");
		scanf("%d",&y);
		while(i<=y)
		{
			ans=ans*x;
			i++;
		}
		printf("%d",ans);
	}
}
