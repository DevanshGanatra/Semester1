// Demonstrate int, float, double and char pointer
#include<stdio.h>
void main()
{
	int a=1;
	int *z=&a;
	float b=1.25;
	float *y=&b;
	double c=12.2254;
	double *x=&c;
	char d='D';
	char *w=&d;
	printf("%d\t",*z);
		printf("%f\t",*y);
			printf("%lf\t",*x);
				printf("%c\t",*w);
}
