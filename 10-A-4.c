//Print digits of given number
#include<stdio.h>
void main()
{
	int n,temp=0;
	printf("enter any integer ");
 scanf("%d",&n);
	while(n!=0)
	{
	temp=n%10;
	printf("%d\n",temp);
	n=n/10;
    
}

}
