/*
  Description: A program which takes input into two 3x4 2D Arrays, and then multiplies the values into a third array.
  Author: Ryan Pitman
  Date: 20/11/2023
*/

#include <stdio.h>

#define ROWS 3
#define COLS 4

int main(void)
{
  int array1[ROWS][COLS];
  int array2[ROWS][COLS];
  int array3[ROWS][COLS];

  
  // Take Input from user for array1
  printf("Enter the values for the first array:\n");
  for (int i = 0; i < ROWS; i++)
  {
    printf("Row %d:\n", i + 1);
    for (int j = 0; j < COLS; j++)
    {
      scanf("%d", &array1[i][j]);
    }
  }

  // Take Input from user for array2
  printf("Enter the values for the second array:\n");
  for (int i = 0; i < ROWS; i++)
  {
    printf("Row %d:\n", i + 1);
    for (int j = 0; j < COLS; j++)
    {
      scanf("%d", &array2[i][j]);
    }
  }

  // Multiply the values of array1 and array2 into array3
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      array3[i][j] = array1[i][j] * array2[i][j];
    }
  }

  // Print the values of array3
  printf("\nThe values of the third array are:\n");
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("%d ", array3[i][j]);
    }
    printf("\n");
  }

  return 0;
}