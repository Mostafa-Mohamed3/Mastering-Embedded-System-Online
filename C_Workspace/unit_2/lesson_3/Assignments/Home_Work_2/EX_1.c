/*Write C Program to check whether a number is even or odd*/

#include<stdio.h>

int main()
{
	int num1;
	printf("Enter an integer you want to check: ");
	fflush(stdin);fflush(stdout);
	scanf(" %d",&num1);
	if((num1%2)==0)
	{
		printf("%d is even.",num1);
	}
	else
	{
		printf("%d is odd.",num1);
	}

	return 0;
}
