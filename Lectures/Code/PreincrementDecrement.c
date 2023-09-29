#include <stdio.h>

int main(void)
{
	int var1;
	int var2;
	int var3;
	int var4;


	var1 = var2 = 1; // var2 gets assigned to 1 first, then var1 gets assigned to var2

	// This is POST-Increment
	var3 = var1++;

	//This is PRE-Increment
	var4 = ++var2;

	printf("var1 is %d, var2 is %d\n", var1, var2);
	// "Var1 is 2, var2 is 2"

	printf("var3 is %d, var4 is %d\n", var3, var4);
	// "Var3 is 1, var4 is 2"

	return 0;
}