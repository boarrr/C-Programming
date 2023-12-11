/*
  Description: A program to calculate the miles per litre of values, using pointer notation
  Author: Ryan Pitman
  Date: 11/12/2023
*/

#include <stdio.h>

int main(void)
{
  float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
  float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
  int mpl[5]; /* Miles per litre */

  float* litresPtr = litres;
  float* milesPtr = miles;

  // Calculate miles per litre
  for (int i = 0; i < 5; i++)
  {
    *(mpl + i) = *(milesPtr + i) / *(litresPtr + i);
  }

  // Display miles per litre
  for (int i = 0; i < 5; i++)
  {
    printf("Car %d gets %d miles per litre\n", i + 1, *(mpl + i));
  }

  return 0;
}