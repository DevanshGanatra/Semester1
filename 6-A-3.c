//Check whether the entered character is upper case, lower case, digit or any special character
#include<stdio.h>
void main()
{
	char a;
	printf("enter any character: ");
	scanf("%c",&a);
	if(a>='A'&&a<='Z')
	{
		printf("its Uppercase");
	}
	else if(a>='a'&&a<='z')
	{
			printf("its Lowercase");
	}
	else if(a>='0'&&a<='9')
	{
			printf("its Digit");
	}
	else
	{
			printf("its Special Symbol");
	}
}
