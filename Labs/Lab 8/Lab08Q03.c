/*
  Description: A program that uses a 3x2 array, takes in input, and calculates the sum of each row individually, each column individually,
  and the highest value in the array.
  Author: Ryan Pitman
  Date: 20/11/2023
*/

#include <stdio.h>

#define ROWS 3
#define COLS 2

int main(void)
{
  int array[ROWS][COLS];
  int highest;


  // Take in input
  printf("Enter 6 numbers:\n");
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      scanf("%d", &array[i][j]);
    }
  }

  highest = array[0][0];

  // Calculate the sum of each row
  for (int i = 0; i < ROWS; i++)
  {
    int sum = 0; // Local variable to store the sum of each row
    
    for (int j = 0; j < COLS; j++)
    {
      sum += array[i][j];

      // Calculate the highest element here for efficiency
      if (array[i][j] > highest)
      {
        highest = array[i][j];
      }
    }
    printf("The sum of row %d is: %d\n", i + 1, sum);
  }

  printf("\n");
  
  // Calculate the sum of each column
  for (int i = 0; i < COLS; i++)
  {
    int sum = 0;
    for (int j = 0; j < ROWS; j++)
    {
      sum += array[j][i];
    }
    printf("The sum of column %d is: %d\n", i + 1, sum);
  }

  // Display the highest value
  printf("\nThe highest value in the array is: %d\n", highest);

  return 0;
}