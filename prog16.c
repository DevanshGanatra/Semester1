//Enter basic salary of an employee and calculate Gross salary according to given conditions:
// - Basic Salary >= 10000 : HRA = 20% of basic, DA = 80% of basic 
//- Basic Salary >= 20000 : HRA = 25% of basic, DA = 90% of basic 
//- Basic Salary >= 30000 : HRA = 30% of basic, DA = 95% of basic 
#include<stdio.h>
void main()
{
	float bs,hra,da,gross;
	printf("enter your basic salary: ");
	scanf("%f",&bs);
	if(bs>=30000)
	{
		hra=0.3*bs;
		da=0.95*bs;
		gross=bs+hra+da;
		printf("gross salary=%f ",gross);
	}
	else if(bs>=20000)
	{
		hra=0.25*bs;
		da=0.9*bs;
		gross=bs+hra+da;
		printf("gross salary=%f ",gross);
	}
	else if(bs>=10000)
	{
		hra=0.2*bs;
		da=0.8*bs;
		gross=bs+hra+da;
		printf("gross salary=%f ",gross);
	}
	else
	{
		printf("invalid input ");
	}
	
}
