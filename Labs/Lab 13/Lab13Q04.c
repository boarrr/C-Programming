/*
  Description: A program to multiply each entry in a 5 value array by 2
  Author: Ryan Pitman
  Date: 15/02/2024
*/

#include <stdio.h>

#define SIZE 5

void timesTwo(int *);

int main(void)
{
  int numbers[SIZE];


  for(int i = 0; i < SIZE; i++)
  {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }

  // Function call
  timesTwo(numbers);

  printf("\n");
  
  // Output the results
  for(int i = 0; i < SIZE; i++)
  {
    printf("%d ", numbers[i]);
  }

  return 0;
}


// Multiply each entry in the array by 2
void timesTwo(int *numbers)
{
  for(int i = 0; i < SIZE; i++)
  {
    *(numbers + i) *= 2;
  }
}