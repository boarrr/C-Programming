/*
  Description: A program to demonstrate pass by value using a function
  Author: Ryan Pitman
  Date: 08/02/2024
*/

#include <stdio.h>

// Function prototype
void increment(int);

int main(void)
{
  int num = 1;

  printf("\nThe value of num in main is %d.\n\n", num);

  // Function call
  increment(num);

  // Output
  printf("The value of num in main is %d.\n\n", num);

  return 0;
}


// Function to increment a number
void increment(int n)
{
  n++;
  printf("The value of n in function is %d.\n\n", n);
}

