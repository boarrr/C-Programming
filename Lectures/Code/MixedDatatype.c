/*
  Program to demonstrate mixed data type expressions 
*/

#include <stdio.h>

int main(void) 
{
	int var1 = 13;
	float var2 = 2.5;
	float var3;
	int var4;
	float var5;


	// Temporarily makes var1 a float: 13.0
	var3 = var1 / var2;

	printf("var3 contains %f\n", var3);
	// "Var3 contains 5.200000"


	// Temporarily makes var1 a float, then rounds down the answer to an integer
	var4 = var1 / var2;

	printf("var4 contains %d\n", var4);
	// "Var4 contains 5"

	// You can cast a variable to temporarily change the data type, here we cast to a float
	var5 = (float)var1 / 4;

	printf("var5 contains %f", var5);
	// "Var5 contains 3.250000"

	return 0; 
}