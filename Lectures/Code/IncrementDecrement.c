#include <stdio.h>

int main(void) 
{
	int var1;
	int var2;
	char my_char;

	var1 = 1;
	var2 = 2;
	my_char = 'a';

	printf("var1 contains %d, var2 contains %d\n", var1, var2);
	// "Var1 contains 1, var2 contains 2"

	var1++;  
	// var1 = var1 + 1
	
	printf("var1 contains %d, var2 contains %d\n", var1, var2);
	// "Var1 contains 2, var2 contains 2"
	
	var2--;  
	// var2 = var2 - 1
	
	printf("var1 contains %d, var2 contains %d\n", var1, var2);
	// "Var1 contains 2, var2 contains 1"


	my_char++;
	// my_char = my_char + 1

	printf("my_char is %c\n", my_char);
	// "my_char is b"
	
	return 0; 
}