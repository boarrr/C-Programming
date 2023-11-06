/*
  Description: A program using an array to store 3 temperatures in Fahrenheit, then display these on screen with the temperatures in Celsius
  Author: Ryan Pitman
  Date: 06/11/2023
*/

#include <stdio.h>

#define SIZE 3

int main(void)
{
  int fahrenheit[SIZE];
  int celsius[SIZE];


  // Take input from user
  printf("Please enter 3 temperatures in Fahrenheit: \n");

  for (int i = 0; i < SIZE; ++i)
  {
    scanf("%d", &fahrenheit[i]);
  }

  // Convert to Celsius and store in celsius array
  // Formula: Celcius = (Fahrenheit - 32) * 5 / 9
  for (int i = 0; i < SIZE; ++i)
  {
    celsius[i] = (fahrenheit[i] - 32) * 5 / 9;
  }

  // Display the arrays
  for (int i = 0; i < SIZE; ++i)
  {
    printf("%d Fahrenheit is %d Celsius\n", fahrenheit[i], celsius[i]);
  }

  return 0;
}