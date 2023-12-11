/*
  Description: A program which takes two floating point arrays of size 3, and copies the elements from the first array into the second array using pointers
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>

#define SIZE 3

int main(void)
{
  float array1[SIZE], array2[SIZE];

  printf("Enter %d floating point numbers:\n", SIZE);

  // Take input for array1
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%f", array1 + i);
  }

  // Copy array1 into array2
  for (int i = 0; i < SIZE; i++)
  {
    *(array2 + i) = *(array1+ i);
  }

  // Display contents of array2
  printf("array2:\n");
  for (int i = 0; i < SIZE; i++)
  {
    printf("%.2f ", *(array2 + i));
  }

  printf("\n");

  return 0;
}