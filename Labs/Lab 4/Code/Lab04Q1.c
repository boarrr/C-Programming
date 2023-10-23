/*
  Description: A program to show if a users inputted character is a vowel using a switch statement
  Author: Ryan Pitman
  Date: 16/10/2023
*/

#include <stdio.h>

int main(void)
{
  char userInput;


  // Take Input from user
  printf("Enter a character: ");
  scanf("%c", &userInput);

  // Check if the character is a vowel
  switch (userInput)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    {
      printf("The character %c is a vowel\n", userInput);
      break;
    }

    default:
    {
      // If character is not found above, it is not a vowel
      printf("The character %c is not a vowel\n", userInput);
      break;
    }
  }

  return 0;
}