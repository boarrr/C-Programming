/*
  Description: Continuation of Q02, with a second block allocated. Store the average in the second block of memory.
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(void)
{
  // Allocate memory for array (Number of elements * Size of float), and a second block for the average
  float* arr = malloc(SIZE * sizeof(float));
  float* average = malloc(sizeof(float));

  if (arr == NULL || average == NULL)
  {
    printf("Error allocating memory\n");
    return 0;
  }

  printf("Enter %d floating point numbers:\n", SIZE);

  // Take input for array
  for (int i = 0; i < SIZE; i++)
  {
    scanf("%f", arr + i);
  }

  // Calculate average of array, and store in second memory block
  for (int i = 0; i < SIZE; i++)
  {
    *average += *(arr + i);
  }
  *average = *average / SIZE;

  printf("\n");

  // Display the first memory block
  for (int i = 0; i < SIZE; i++)
  {
    printf("%.2f ", *(arr + i));
  }

  printf("\n");

  // Display the second memory block
  printf("Average: %.2f\n", *average);

  return 0;
}