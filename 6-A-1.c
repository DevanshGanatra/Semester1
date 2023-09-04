//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice. 
#include<stdio.h>
void main()
{
	int choice;
	float div,a,b,add,sub,mul;
	printf("Enter the value of A and B :");
	scanf("%f %f",&a,&b);
	printf("1.addition 2.subtraction 3.multiplication 4.division\n");
	printf("enter your choice");
	scanf("%d",&choice);
	if (choice==1)
	{
		add=a+b;
		printf("addition=%f",add);
	}
		else if (choice==2)
	{
		sub=a-b;
		printf("subtraction=%f",sub);
	}
		else if (choice==3)
	{
		mul=a*b;
		printf("multiplication=%f",mul);
	}
		else if (choice==4)
	{
		div=(a/b);
		printf("division=%f",div);
	}
	else
	{
		printf("enter an valid choice");
	}
}
