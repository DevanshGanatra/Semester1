//Print number of days in a month using switch
#include<stdio.h>
void main()
{
	int d;
	printf("enter any integer  ");
	scanf("%d",&d);
	switch(d)
	{
	case 1:
    case 3:
    case 5:
	case 7:
	case 8:
	case 10:
	case 12:printf("it have 31 days");
	break;
	case 4:
	case 6:
	case 9:
	case 11:printf("it have 30 days");
	break;
	case 2:printf("it have 28 days(generaly)");
	break;
	default:printf("enter any valid intger ");
}
}
