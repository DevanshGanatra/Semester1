/*
 Get a decimal number from user and convert it into roman digits.
(Symbol: I:1, IV:4, V:5, IX:9, X:10, XL:40, L:50, XC:90, C:100, CD:400, 
 D:500, CM:900, M:1000) 
*/
#include<stdio.h>
void main()
{
	int a;
	printf("enter integer: ");
	scanf("%d",&a);
	while(a!=0){
		if(a>=1000)
		{
			printf("M");
			a=a-1000;
		}
	else if(a>=900)
		{
			printf("CM");
			a=a-900;
		}
	else if(a>=500)
		{
			printf("D");
			a=a-500;
		}
	else if(a>=400)
		{
			printf("CD");
			a=a-400;
		}
	else if(a>=100)
		{
			printf("C");
			a=a-100;
		}
	else if(a>=90)
		{
			printf("XC");
			a=a-90;
		}	
	else if(a>=50)
		{
			printf("L");
			a=a-50;
		}	
	else if(a>=40)
		{
			printf("XL");
			a=a-40;
		}
	else if(a>=10)
		{
			printf("X");
			a=a-10;
		}
	else if(a>=9)
		{
			printf("IX");
			a=a-9;
		}
	else if(a>=5)
		{
			printf("V");
			a=a-5;
		}	
	else if(a>=4)
		{
			printf("IV");
			a=a-4;
		}	
	else if(a>=1)
		{
			printf("I");
			a=a-1;
		}				
	}
}
