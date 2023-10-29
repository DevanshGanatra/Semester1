// Print given number in reverse order.
// note:" temp=(temp*10)+n%10 "
#include<stdio.h>
void main()
{
	int n,temp=0;
	printf("enter any integer ");
 scanf("%d",&n);
	while(n>0)
	{
    temp=(temp*10)+(n%10);
	n=n/10;
}
printf("%d",temp);
}
