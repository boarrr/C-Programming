/*
  Description: A program to show different delimiter sizes for floats
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

#define SIZE 3 // Size of the array

int main(void)
{
  float nums[SIZE];


  // Take input from user
  for (int i = 0; i < SIZE; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%f", &nums[i]);
  }

  // Display output
  printf("Your numbers are:\n%.4f\n%.3f\n%.0f\n", nums[0], nums[1], nums[2]);

  return 0;
}