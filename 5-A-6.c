// check whether character is vowel or consonent
#include<stdio.h>
void main()
{
	char b;
	printf("enter any character: ");
	scanf("%c",&b);
	if(b=='A'||b=='E'||b=='I'||b=='O'||b=='U'||b=='a'||b=='e'||b=='i'||b=='o'||b=='u')
	{
		printf("entered character is an vowel.");
	}
	else
	{
		printf("entered character is an consonent.");
	}
}
