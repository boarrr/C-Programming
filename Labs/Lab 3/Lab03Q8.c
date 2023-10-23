/*
  Description: A program that allows a user to input three floating point numbers, and calculates their sum and average
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

#define SIZE 3 // Number of inputs from user

int main(void)
{
  float numbers[SIZE];
  float sum, average;
  

  // Take input from user, store in array
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter floating point number %d: ", i + 1);
    scanf("%f", &numbers[i]);
  }

  // Calculate sum
  for (int i = 0; i < SIZE; i++)
  {
    sum += numbers[i];
  }

  // Calculate average
  average = sum / SIZE;

  // Print sum and average to 3 decimal places
  printf("\nThe sum is: %.3f\n", sum);
  printf("The average is: %.3f\n", average);

  return 0;
}

