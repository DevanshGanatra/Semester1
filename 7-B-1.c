//Read 3 numbers, multiply largest number from first two numbers to third one using switch
#include<stdio.h>
void main()
{
	int a,b,c,temp;
	printf("enter any three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	temp=a>b?1:0;
	switch(temp)
	{
	case 1:printf("%d",a*c);
	break;
	case 0:printf("%d",b*c);
	break;
	}
}
