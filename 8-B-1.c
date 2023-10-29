//Print number and its square root for 0 to 9. 
#include<stdio.h>
#include<math.h>
void main()
{
	float n=0;
	while(n<10)
	{
		printf(" no.=%.1f\n",n);
		printf("its square root=%.3f",sqrt(n));
		printf("\n");
		n++;
	}
}
