//Find whether the given number is prime or not
#include<stdio.h>
void main()
{
 int n,i=2,count=0;
 printf("enter any integer\n");
 scanf("%d",&n);
 while(i<=n)
 {
 	if(i%n==0)
 	{
 	count++;
	 }
	 i++;
 }
 count>0?printf("its prime"):printf("its non prime");
}
