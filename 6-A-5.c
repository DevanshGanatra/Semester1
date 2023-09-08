// Read marks of five subjects.
// Calculate percentage and print class accordingly.
// Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, First Class between 61 to 70, Distinction if more than 70. 
#include<stdio.h>
void main()
{
	float m1,m2,m3,m4,m5,per;
	printf("enter your all marks: ");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/5.0;
	printf("your percentage is=%f",per);
	if(per<35)
	{
		printf("\nFAIL");
	}
	else if(per<46)
	{
		printf("\nPASS");
	}
	else if(per<61)
	{
		printf("\nSECOND CLASS");
	}
	else if(per<71)
	{
		printf("\nPASS");
	}
	else
	{
		printf("\nDISTINCTION");
	}
}
