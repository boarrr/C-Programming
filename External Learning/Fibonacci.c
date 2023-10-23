/*
  Author: Ryan Pitman
  Description: A program to display Fibonacci to the 10th term
  Date: 01/10/2023
*/

#include <stdio.h>

void fib(int n);

int main(void)
{
  int term = 10;

  printf("\nDisplaying Fibonacci to the 10th term:\n");
  fib(term);
  
  return 0;
}

void fib(int n)
{
  int x = 0, y = 1;
  int z = 0;

  while (n > 0)
  {
    printf("%d\n", x);
    z = x + y;
    x = y;
    y = z;
    
    n--;
  }
} 