/*
  Description: A program to convert Fahrenheit to Celsius
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

int main()
{
  float fahrenheit, celsius;

  printf("Enter temperature in degrees Fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - 32.0) * (5.0 / 9.0);

  printf("The temperature in Celsius is %.2f\n", celsius);

  return 0;
}