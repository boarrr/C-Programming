/*
	Author: Ryan Pitman 
	Description: Program to illustrate errors in a C program.
	Date: 25/09/2023
*/

#include <stdio.h>

int main(void)
{
	int num1, num2;
	float num3;

	num1 = 400;
	num2 = 600; 
	num3 = num2;

	printf("Num1 contains %d\n", num1);
	printf("Num2 contains %d and Num3 contains %.2f\n", num2, num3);

	return 0;
}