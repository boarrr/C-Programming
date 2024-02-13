/*
  Description: A program to demonstrate returning a value from a function, via an even or odd number check.
  Author: Ryan Pitman
  Date: 08/02/2024
*/

#include <stdio.h>

int evenOrOdd(int num);

int main(void)
{
  int num, result;


  // User input
  printf("Enter a number: ");
  scanf("%d", &num);

  // Function call
  result = evenOrOdd(num);

  // Output
  if (result == 0)
  {
    printf("The number %d is odd.\n", num);
  }
  else
  {
    printf("The number %d is even.\n", num);
  }

  return 0;
}


// Function to check if a number is even or odd
int evenOrOdd(int num)
{
  if (num % 2 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}