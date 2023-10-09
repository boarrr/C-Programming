/*
  Description: A program to display floating point numbers in various formats
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

int main()
{
  float v1, v2, v3;

  v1 = 5;
  v2 = -4.5;
  v3 = 11.25;

  printf("v1 = %.0f, v2 = %.1f, v3 = %.2f\n", v1, v2, v3);

  return 0;
}