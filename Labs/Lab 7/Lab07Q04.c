/*
  Description: A program to read in 15 integers, and display them in different ways, including in reverse order
  Author: Ryan Pitman
  Date: 13/11/2023
*/

#include <stdio.h>

#define SIZE 15

int main(void)
{
  int array[SIZE] = {0};

  // Take in input for the array
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter a value for array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  // Display the contents of the array on seperate lines
  printf("\nContents of the array: \n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d\n", array[i]);
  }

  // Display the contents of the array seperated by spaces
  printf("\nContents of the array: \n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ", array[i]);
  }

  // Display the contents of the array in reverse order seperated by spaces
  printf("\n\nContents of the array in reverse order: \n");
  for (int i = SIZE - 1; i >= 0; i--)
  {
    printf("%d ", array[i]);
  }

  return 0;
}