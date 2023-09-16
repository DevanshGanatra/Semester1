//Print day name of week using switch.
#include<stdio.h>
void main()
{
	int d;
	printf("enter integer  ");
	scanf("%d",&d);
	switch(d)
	{
		case 1:printf("sunday");
		break;
		case 2:printf("monday");
		break;
		case 3:printf("tuesday");
		break;
		case 4:printf("wednesday");
		break;
		case 5:printf("thursday");
		break;
		case 6:printf("friday");
		break;
		case 7:printf("saturday");
		break;
		default:printf("enter valid integer");
			
	}
}
