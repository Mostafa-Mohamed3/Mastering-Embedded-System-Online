/*Write C Program to check whether a character is an alphabet or not*/

#include<stdio.h>

int main()
{
	char character;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&character);
	if((character>='a')&&(character<='z'))
	{
		printf("%c is an alphabet",character);
	}
	else if((character>='A')&&(character<='Z'))
	{
		printf("%c is an alphabet",character);
	}
	else
	{
		printf("%c is not an alphabet",character);
	}

	return 0;
}
