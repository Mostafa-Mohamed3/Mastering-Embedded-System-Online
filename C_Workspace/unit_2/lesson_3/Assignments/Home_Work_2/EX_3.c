/*Write C Program to find the largest number among three numbers*/

#include<stdio.h>

int main()
{
	float num1,num2,num3;
	printf("Enter three numbers: ");
	fflush(stdin);fflush(stdout);
	scanf(" %f",&num1);
	scanf(" %f",&num2);
	scanf(" %f",&num3);
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("Largest number = %.3f",num1);
		}
		else
		{
			printf("Largest number = %.3f",num3);
		}
	}
	else
	{
		if(num2>num3)
		{
			printf("Largest number = %.3f",num2);
		}
		else
		{
			printf("Largest number = %.3f",num3);
		}
	}

	return 0;
}
