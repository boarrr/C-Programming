#include <stdio.h>

int main(void)
{
	float var = 0;  
	
	printf("Enter any float number: ");

	scanf("%f", &var);  
	
	// Display the number entered correct to 2 decimal places
	printf("You entered %1.2f\n", var); 
	
	return 0;
}