//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main()
{
	char a='A',b='a';
	for(;a<='Z';){
		printf("%c",a);
		a++;
	}
	printf("\n");
	for(;b<='z';){
		printf("%c",b);
		b++;
	}
	
}
