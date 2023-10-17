/*
  Description: This program will take in two numbers from the user, and check if the first is divisable by the second evenly.
*/

#include <stdio.h>

int main()
{
  int num1, num2;

  // Get input
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);

  // Check if divisable
  if (num1 % num2 == 0)
  {
    printf("%d is evenly divisable by %d\n", num1, num2);
  }
  else
  {
    printf("%d is not evenly divisable by %d\n", num1, num2);
  }

  return 0;
}

