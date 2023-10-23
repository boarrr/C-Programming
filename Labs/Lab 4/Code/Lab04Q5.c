/*
  Description: A program to check from a triangles sides, if it is a valid triangle (Sum of any two sides is greater than the third side)
  Author: Ryan Pitman
  Date: 16/10/2023
*/

#include <stdio.h>

int main(void)
{
  int side1, side2, side3;


  // Get input
  printf("Enter the length of the first side: ");
  scanf("%d", &side1);
  printf("Enter the length of the second side: ");
  scanf("%d", &side2);
  printf("Enter the length of the third side: ");
  scanf("%d", &side3);

  // Check if valid triangle through comparisons of each side
  if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1)
  {
    printf("The triangle is valid\n");
  }
  else
  {
    printf("The triangle is not valid\n");
  }

  return 0;
}