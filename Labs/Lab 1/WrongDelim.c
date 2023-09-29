/*
	Author: Ryan Pitman
	Description: A program to display the errors of using a wrong delimiter in C
	Date: 25/09/2023
*/

#include <stdio.h>

int main()

{
	// Variable Declaration
	int var1;
	float var2;
	char var3;
	
	// Variable Assignment
	var1 = 10;
	var2 = 8.21;
	var3 = 'q';

	printf("%s\n", var1);
	printf("%c\n", var2);
	printf("%d\n", var3);

	return 0;
}