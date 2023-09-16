// Input electricity unit charge and calculate the total electricity bill according to the given condition:
// - For first 50 units Rs. 0.50/unit
// - For next 100 units Rs. 0.75/unit
// - For next 100 units Rs. 1.20/unit
// - For unit above 250 Rs. 1.50/unit
// - An additional surcharge of 20% is added to the bill
#include<stdio.h>
void main()
{
	float a,charge,extra,total;
	printf("enter no of units used: ");
	scanf("%f",&a);
	if(a<=50)
	{
		charge=a*0.5;
	}
	else if(a<=150)
	{
		charge=((a-50)*0.75)+(50*0.5);
	}
	else if(a<=250)
	{
		charge=((a-150)*1.20)+(100*0.75)+(50*0.5);
	}
	else if(a>250)
	{
		charge=((a-250)*1.50)+(100*1.20)+(100*0.75)+(50*0.5);
	}
	else
	{
		printf("invalid input");
	}
	extra=charge*0.2;
	total=charge+extra;
	printf("your Bill is of RS =%f",total);
}
