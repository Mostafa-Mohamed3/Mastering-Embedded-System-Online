/*Write C Program to check whether a number is positive or negative*/

#include<stdio.h>

int main()
{
	float num1;
	printf("Enter a numbers: ");
	fflush(stdin);fflush(stdout);
	scanf(" %f",&num1);
	if(num1==0)
	{
		printf("you entered Zero.");
	}
	else if(num1>0)
	{
		printf("%.3f is positive",num1);
	}
	else
	{
		printf("%.3f is negative",num1);
	}

	return 0;
}
