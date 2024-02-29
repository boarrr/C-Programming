/*
  Description: A program which allows input of two words, and compares if they are the same.
  Author: Ryan Pitman
  Date: 29/02/2024
*/

#include <stdio.h>
#include <string.h>

#define MAX 21

int main(void)
{
  char word1[MAX];
  char word2[MAX];

  printf("Enter a word: ");
  scanf("%s", word1);
  printf("Enter another word: ");
  scanf("%s", word2);

  if (strcmp(word1, word2) == 0)
  {
    printf("The words are the same\n");
  }
  else
  {
    printf("The words are different\n");
  }

  return 0;
}