/*Write C Program to calculate sum of natural numbers*/

#include<stdio.h>

int main()
{
	int num1,i,sum=0;
	printf("Enter an integer: ");
	fflush(stdin);fflush(stdout);
	scanf(" %d",&num1);
	for(i=1;i<=num1;i++)
	{
		sum+=i;
	}
	printf("sum = %d",sum);

	return 0;
}
