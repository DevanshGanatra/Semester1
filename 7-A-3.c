//Perform Addition, Subtraction, Multiplication and Division
// of 2 numbers as per user’s choice using switch.
//note:-In switch case we will not use case1 case2... as we arent scanning integer.
#include<stdio.h>
void main()
{
	int a,b,ch;
	printf("Enter any opperation: ");
	scanf("%c",&ch);
	printf("Enter  first variables: ");
	scanf("%d",&a);
	printf("Enter  second variables: ");
	scanf("%d",&b);
	switch(ch)
	{
	case '+':
		printf("addition=%d",a+b);
		break;
	case '-':
	    printf("subtraction=%d",a-b);
	    break;
	case '*':
	    printf("multiplication=%d",a*b);
	    break;
	case '/':
	    printf("divition=%f",a/b);
	    break;
	default:
	    printf("invalid opation entered!");
}
}
