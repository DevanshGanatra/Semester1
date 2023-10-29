//Find whether the given number is prime or not using flag
#include<stdio.h>
void main()
{
 int n,i=2,flag=0;
 printf("enter any integer\n");
 scanf("%d",&n);
 while(i<n)
 {
 	if(i%n==0)
 	{
 	flag++;
	 }
	 i++;
 }
 flag>0?printf("its prime"):printf("its non prime");
}
