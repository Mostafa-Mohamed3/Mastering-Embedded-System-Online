/*Write C Program to Find ASCII Value of a Character*/

#include<stdio.h>

int main()
{
	char char1;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&char1);
	printf("ASCII value of %c = %d",char1,char1);

	return 0;
}