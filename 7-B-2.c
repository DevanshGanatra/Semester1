// Check whether character is an alphabet or not using conditional operator. 
#include<stdio.h>
void main()
{
	char x;
	printf("enter anything: ");
	scanf("%c",&x);
	(x>='a'&&x<='z')||(x>='A'&&x<='Z')?printf("entered input is an alphabet"):printf("entered input is not an alphabet");
}
