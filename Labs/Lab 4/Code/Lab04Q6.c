/*
  Description: A program that takes a single numeral from the user (0 - 9) and displays it as a word
  Author: Ryan Pitman
  Date: 16/10/2023
*/

#include <stdio.h>

int main(void)
{
  int userNum;
  char numWord[10][10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};


  // Get input
  printf("Enter a number between 0 and 9: ");
  scanf("%d", &userNum);

  // Check if between 0 and 9
  if (userNum >= 0 && userNum <= 9)
  {
    printf("The number %d is %s\n", userNum, numWord[userNum]);
  }
  else
  {
    printf("The number %d is not between 0 and 9\n", userNum);
  }

  return 0;
} 