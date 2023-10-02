/* Program to demonstrate scanf usage in context of a basic addition operation */

#include <stdio.h>

int main(void)
{
  int var1 = 0;
  int var2 = 0;
  int sum = 0;


  printf("Enter first number: ");
  scanf("%d", &var1);

  printf("Enter second number: "); 
  scanf("%d", &var2);

  // Get the sum of the numbers entered
  sum = var1 + var2;
  
  printf("Sum of Var1 and Var2 is %d\n", sum);

  return 0;
}