/*Write C Program to make a simple calculator to add, subtract, multiply,
  or divide using switch..case*/

#include<stdio.h>

int main()
{
	char operator;
	float num1,num2;
	printf("Enter operator either + or - or * or / : ");
	fflush(stdin);fflush(stdout);
	scanf(" %c",&operator);
	printf("Enter two operands: ");
	fflush(stdin);fflush(stdout);
	scanf(" %f",&num1);
	scanf(" %f",&num2);
	switch(operator)
	{
		case '+':
		{
			printf("%.3f %c %.3f = %.3f",num1,operator,num2,num1+num2);
		}
		break;
		case '-':
		{
			printf("%.3f %c %.3f = %.3f",num1,operator,num2,num1-num2);
		}
		break;
		case '*':
		{
			printf("%.3f %c %.3f = %.3f",num1,operator,num2,num1*num2);
		}
		break;
		case '/':
		{
			printf("%.3f %c %.3f = %.3f",num1,operator,num2,num1/num2);
		}
		break;
		default:
		{
			printf("Wrong Operator!!");
		}
		break;
	}
	return 0;
}
