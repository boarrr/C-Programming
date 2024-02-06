#include <stdio.h>


int euclidsOne(int, int);

int main(void)
{	
	int num1, num2;
	int gcd;


	printf("Enter X and Y for GCD(X, Y):\n");
	scanf("%d%d", &num1, &num2);

	gcd = euclidsOne(num1, num2);

	printf("The GCD(%d, %d) is: %d\n", num1,num2, gcd);	
	
	return 0;
}


int euclidsOne(int x, int y)
{
	if (x % y == 0)
	{
		return y;
	}

	return euclidsOne(y, x % y);
}
