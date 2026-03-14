/*Write C Program to check vowel or consonant*/

#include<stdio.h>

int main()
{
	char character;
	printf("Enter an alphabet: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&character);
	if((character=='a')||(character=='A'))
	{
		printf("%c is a vowel.",character);
	}
	else if((character=='e')||(character=='E'))
	{
		printf("%c is a vowel.",character);
	}
	else if((character=='i')||(character=='I'))
	{
		printf("%c is a vowel.",character);
	}
	else if((character=='o')||(character=='O'))
	{
		printf("%c is a vowel.",character);
	}
	else if((character=='u')||(character=='U'))
	{
		printf("%c is a vowel.",character);
	}
	else
	{
		printf("%c is a consonant.",character);
	}

	return 0;
}
