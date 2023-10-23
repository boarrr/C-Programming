/*
  Description: A program to compute a sequence on an inputted number: If the number is even, half it, if the number is odd, multiply it by 3 and add 1.
  - Repeat until value is 1.
  Author: Ryan Pitman
  Date: 23/10/2023
*/

#include <stdio.h>

int main()
{
  int userInput = 0;
  int counter = 0;


  // Take user input and verify it is positive
  do 
  {
    printf("Please enter a positive integer: ");
    scanf("%d", &userInput);

    if (userInput < 1)
    {
      printf("Error\n");
    }

  } while (userInput <= 0);

  // Begin sequence on input, break when result is 1
  printf("Value entered is %d\n", userInput);
  while (userInput != 1)
  {
    if (userInput % 2 == 0) // Is input even
    {
      userInput /= 2;
    }
    else // Else is input odd
    {
      userInput = (userInput * 3) + 1;
    }

    if (userInput != 1) // Ignore final value
    {
      printf("Next value is %d\n", userInput);
    }

    counter++;
  }

  printf("Final value is %d, number of steps %d\n", userInput, counter);

  return 0;
}