/*
  Description: A program to take 3 numbers as input and display to standard output
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

#define SIZE 3

int main(void)
{
  int userNum[SIZE];


  // Take input from user
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &userNum[i]);
  }

  // Display the entered numbers
  printf("The numbers you entered are:\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\n", userNum[i]);
  }

  return 0;
}