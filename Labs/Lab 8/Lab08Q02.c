/*
  Description: Completion of a program to sum up all elements in a 2D array
  Author: Ryan Pitman
  Date: 20/11/2023
*/

#include <stdio.h>

#define ROWS 4
#define COLS 6

int main(void)
{
  int data[ROWS][COLS] = { 
  {3, 2, 5, 7, 4, 2},
  {1, 4, 4, 8, 13, 1},
  {9, 1, 0, 2, 0, 0},
  {0, 2, 6, 3, -1, -8}
  };

  int i, j;
  int total = 0;

  // Compute the sum
  for (i = 0; i < ROWS; i++)
  {
    for (j = 0; j < COLS; j++)
    {
      total += data[i][j];
    }
  }

  // Display the sum
  printf("The total of the array is: %d\n", total);

  return 0; 
}