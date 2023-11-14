/*
  Description: A program to take input into a 4x5 2D array, then search the array for any negative elements and display their positions
  Author: Ryan Pitman
  Date: 13/11/2023
*/

#include <stdio.h>

#define ROWS 4
#define COLS 5

int main(void)
{
  int array[ROWS][COLS];


  // Take in input for the array
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("Enter a value for array[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
    }
  }

  // Search the array for negative elements, and display their positions
  printf("Negative elements found at:\n");

  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      // If the number is less than 0, it is a negative number
      if (array[i][j] < 0)
      {
        printf("%d found at row %d, col %d\n", array[i][j], i, j);
      }
    }
  }

  return 0;
}