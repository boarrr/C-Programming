/*
  Description: A program which uses two functions to calculate the area of a square and the area of a circle, using pass by reference
  Author: Ryan Pitman
  Date: 15/02/2024
*/

#include <stdio.h>

#define PI 3.14159

float areaOfSquare(float *);
float areaOfCircle(float *);

int main(void)
{
  float side, radius;

  // User Input
  printf("Enter the length of the side of the square: ");
  scanf("%f", &side);

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  // Output the results
  printf("The area of the square is %.2f\n", areaOfSquare(&side));
  printf("The area of the circle is %.2f\n", areaOfCircle(&radius));

  return 0;
}


// Area of a square is the side squared
float areaOfSquare(float *side)
{
  return (*side) * (*side);
}


// Area of a circle is pi * radius squared
float areaOfCircle(float *radius)
{
  return PI * ((*radius) * (*radius));
}