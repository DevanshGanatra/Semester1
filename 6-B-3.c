//Three sides of a triangle are entered through the keyboard, WAP to check whether the triangle is isosceles, equilateral, scalene or right angled triangle. 
//WAP=WRITE A PROGRAMME
#include<stdio.h>
void main()
{
	float a,b,c;
	printf("enter sides of triangle as A,B,C ");
	scanf("%f %f %f",&a,&b,&c);
	if(a==b||b==c||c==a)
	{
		 if(a==b&&b==c&&c==a)
	{
		printf("\nits equilateral triangle");
	}
	else
	{
		printf("\nits isosceles triangle");
	}
		if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
		{
			printf("\nits rightangled triangle");
		}
	}
	else if (a!=b&&b!=c&&c!=a)
	{
		if(a*a+b*b==c*c||c*c+b*b==a*a||a*a+c*c==b*b)
		{
			printf("\nits rightangled triangle");
		}
		printf("\nits scalene triangle");
	}
}
