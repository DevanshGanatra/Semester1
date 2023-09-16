// Determine the roots of the equation ax2+bx+c=0
//for doing sruare root we have to choice
//sqrt();
//pow(base,power);
#include<stdio.h>
#include<math.h>
void main()
{
	double a,b,c,root1,root2;
	printf("enter the values of A,B,C :");
	scanf("%lf %lf %lf",&a,&b,&c);
	if(b*b>=4*a*c)
	{
		root1=((-b)+sqrt((b*b)-4*a*c))/(2*a);
		root2=((-b)-sqrt((b*b)-4*a*c))/(2*a);
		printf(" root1 =%lf",root1);
		printf("\n root2 =%lf",root2);
	}
	else
	{
		printf("roots are imaginary");
	}
}
