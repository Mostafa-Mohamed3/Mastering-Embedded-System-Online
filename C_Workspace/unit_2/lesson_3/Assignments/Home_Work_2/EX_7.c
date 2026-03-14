/*Write C Program to find factorial of a number*/

#include<stdio.h>

int main()
{
	int num1,Factorial=1,i;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf(" %d",&num1);
	if(num1==0)
	{
		printf("Factorial = 1");
	}
	else if(num1>0)
	{
		for(i=1;i<=num1;i++)
		{
			Factorial*=i;
		}
		printf("Factorial = %d",Factorial);
	}
	else
	{
		printf("Error!!! Factorial of negative number doesn't exist.");
	}

	return 0;
}
