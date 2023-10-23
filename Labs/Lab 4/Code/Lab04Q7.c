/*
  Description: A program that takes a number from the user (1 - 7) and displays it as the day of the week
  Author: Ryan Pitman
  Date: 16/10/2023
*/

#include <stdio.h>

int main(void)
{
  int userNum;
  char weekDays[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};


  // Get input
  printf("Enter a number between 1 and 7: ");
  scanf("%d", &userNum);

  // Check if between 0 and 9
  if (userNum >= 1 && userNum <= 7)
  {
    printf("%d as a day of the week is %s\n", userNum, weekDays[userNum - 1]);
  }
  else
  {
    printf("The number %d is not between 1 and 7!\n", userNum);
  }

  return 0;
}