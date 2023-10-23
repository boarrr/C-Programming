/*
  Description: Calculating how many times a persons heart has beaten with the assumption that a heart beats an average of 75BPM
  Author: Ryan Pitman
  Date: 09/10/2023
*/

#include <stdio.h>

int main(void)
{
  int bpmAverage = 75;
  short age;
  unsigned long totalBeats;


  printf("Please enter your age: ");
  scanf("%hi", &age);

  // total = bpm * 60 seconds * 24 hours * 365 days * age
  totalBeats = bpmAverage * 60 * 24 * 365 * age;

  printf("Your heart has beaten approximately %lu times in your lifetime.\n", totalBeats);

  return 0;
}