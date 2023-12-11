/*
  Description: A program which uses DMA to allocate an array for five floating point numbers, and calculates the average
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
  // Allocate memory for array (Number of elements * Size of float)
  float* arr = malloc(SIZE * sizeof(float));
  float average = 0;


  if (arr == NULL)
  {
    printf("Error allocating memory\n");
    return 0;
  }
  else 
  {
    printf("Enter %d floating point numbers:\n", SIZE);

    // Take input for array
    for (int i = 0; i < SIZE; i++)
    {
      scanf("%f", arr + i);
    }

    // Calculate average of array
    for (int i = 0; i < SIZE; i++)
    {
      average += *(arr + i);
    }
    average /= SIZE;

    // Display the average
    printf("Average: %.2f\n", average);

    free(arr);
  }

  return 0;
}