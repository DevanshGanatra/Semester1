//Print number of days in a month considering leap year using switch. 
#include<stdio.h>
void main()
{
	int m;
	printf("enter month no. of your choice :");
	scanf("%d",&m);
	switch(m)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: printf("no. of days are 31. ");
	break;
	case 4:
	case 6:
	case 9:
	case 11: printf("no. of days are 30. ");
	break;
	case 2: printf("no. of days are 29(since its leap year). ");
	break;
	default: printf("invalid input ");
	}
}
