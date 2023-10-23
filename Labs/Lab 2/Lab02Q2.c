/* 
  Description: A program to display the area of a box, and the area of a circle
  Author: Ryan Pitman
  Date: 02/10/2023
*/

#include <stdio.h>

int main(void)
{
  float height, width, length, radius;
  float volume, areaBox, areaCircle;

  height = 10.0;
  length = 11.5;
  width = 2.5;
  radius = 4.8;

  
  // This calculates the volume of a box
  volume = length * width * height;
  printf("\nThe volume of the box is %.2fcm^3\n", volume);

  // This calculates the area of a box
  areaBox = 2 * (length * width + length * height + height * width);
  printf("The area of the box is %.2fcm^2\n", areaBox);

  // This calculates the area of a circle
  areaCircle = 3.14 * (radius * radius);
  printf("\nThe area of the circle is roughly %.2fcm^2\n", areaCircle);
  
  return 0;
}