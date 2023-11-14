/*
  Description: A program to take inputs into two arrays of 5 elements, and display the results of multiplying the elements together
  Author: Ryan Pitman
  Date: 13/11/2023
*/

#include <stdio.h>

#define SIZE 5

int main(void)
{
  int array1[SIZE] = {0}, array2[SIZE] = {0}, array3[SIZE] = {0};

  // Take in input for the first array
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter a value for array1[%d]: ", i);
    scanf("%d", &array1[i]);
  }

  printf("\n");

  // Take in input for the second array
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter a value for array2[%d]: ", i);
    scanf("%d", &array2[i]);
  }

  // Multiply the elements of the arrays together, and store them in the third array
  for (int i = 0; i < SIZE; i++)
  {
    array3[i] = array1[i] * array2[i];
  }

  // Display the contents of the third array
  printf("\nContents of the third array: \n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%d ", array3[i]);
  }

  return 0;
}