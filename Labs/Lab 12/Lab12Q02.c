/*
  Description: A program to calculate the average of 3 numbers using a function return.
  Author: Ryan Pitman
  Date: 08/02/2024
*/

#include <stdio.h>

#define SIZE 3

// Function prototype, float return due to division
float average(float *);

int main(void)
{
  float nums[SIZE];

  // User input
  printf("Enter %d numbers: ", SIZE);

  for (int i = 0; i < SIZE; i++)
  {
    scanf("%f", &nums[i]);
  }
  
  // Function call and output
  printf("The average of the 3 numbers is %.2f.\n", average(nums));

  return 0; 
}


// Function to calculate the average of 3 numbers
float average(float *arr)
{
  float sum = 0;

  for (int i = 0; i < SIZE; i++)
  {
    sum += arr[i];
  }

  return sum / SIZE;
}