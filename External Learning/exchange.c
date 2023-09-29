/*
	Author: Ryan Pitman
	Description: A program illustrating swapping of variables in C
	Date: 27/09/2023
*/

#include <stdio.h>

int main()
{
	
	int a = 57;
	int b = 79;
	int c = 0;

	c = a;
	a = b;
	b = c;

	printf("A = %d, B = %d\n", a, b);

	return 0;
}