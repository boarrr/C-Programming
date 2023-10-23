/*
  Description: A program to calculate and display the volume of a cube
  Author: Ryan Pitman
  Date: 02/10/2023
*/

#include <stdio.h>

int main(void)
{
  float sides = 2.8;
  float volume;


  // Calculate the volumn of the cube
  volume = sides * sides * sides;
  printf("The volume of the cube is %.3fm^3\n", volume);

  return 0;
}