/*
  Description: A program to calculate the average of a 5 value array in a function
  Author: Ryan Pitman
  Date: 15/02/2024
*/

#include <stdio.h>

#define SIZE 5

float average(int *);

int main(void)
{
  int numbers[SIZE];


  // User input
  for(int i = 0; i < SIZE; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Calculate the average of the numbers and display
  printf("The average of the numbers is %.2f\n", average(numbers));

  return 0;
}


// Calculate the average of the numbers
float average(int *numbers)
{
  float total = 0;

  for(int i = 0; i < SIZE; i++)
  {
    total += *(numbers + i);
  }

  return total / SIZE;
}