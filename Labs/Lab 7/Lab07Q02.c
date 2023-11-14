/*
  Description: A program to utilise a 2D array to take in input, display values, find the smallest and largest values, and calculate the average of the array
  Author: Ryan Pitman
  Date: 13/11/2023
*/

#include <stdio.h>

#define ROWS 3
#define COLS 2

int main(void)
{
  int array[ROWS][COLS] = {0};
  float average = 0;


  // Take in input for the array, summing it up for future calculations
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("Enter a value for array[%d][%d]: ", i, j);
      scanf("%d", &array[i][j]);
      average += array[i][j];
    }
  }

  // Preset the lowest and highest elements of the array
  int lowest = array[0][0], highest = array[0][0];

  // Display the contents of the array, whilst calculating the lowest and highest elements for efficiency
  printf("\nContents of the array: \n");
  for (int i = 0; i < ROWS; i++)
  {
    for (int j = 0; j < COLS; j++)
    {
      printf("%d ", array[i][j]);

      // If the number at the current index is lower, make it lowest
      if (array[i][j] < lowest)
      {
        lowest = array[i][j];
      }
      // If the number is higher, make it highest
      else if (array[i][j] > highest)
      {
        highest = array[i][j];
      }
    }
    printf("\n");
  }

  // Display the lowest and highest values
  printf("The lowest value was: %d\nThe highest value was %d\n", lowest, highest);


  // Calculate the average of the array.
  // Total / N, where N = ROWS * COLS, cast to float for accuracy
  average = average / (float)(ROWS * COLS);
  printf("\nThe average of the array is: %.2f\n", average);

  return 0;
}