/*
  Description: A program which allows input of two words, concats to the first word, and checks the length of the new sentence.
  Author: Ryan Pitman
  Date: 29/02/2024
*/

#include <stdio.h>
#include <string.h>

#define MAX 21

void concat(char*, char*);
void length(char*);

int main(void)
{
  char word1[MAX];
  char word2[MAX];
  char appendStr[(MAX * 2)] = "First word entered is ";


  // Get the two words
  printf("Enter a word: ");
  scanf("%s", word1);
  printf("Enter another word: ");
  scanf("%s", word2);


  // Compare the two words
  if (strcmp(word1, word2) == 0)
  {
    printf("\nThe words are the same\n");
  }
  else
  {
    printf("\nThe words are different\n");
  }

  // Concatenate the two words
  concat(appendStr, word1);

  return 0;
}


// Concatenate two strings
void concat(char *str1, char *str2)
{
  strcat(str1, str2);
  printf("%s\n", str1);

  // Get the length of the new sentence
  length(str1);
}

// Count the number of characters in a string
void length(char *str)
{
  int count = 0;

  // This counts spaces as well
  while (*str != '\0')
  {
    count++;
    str++;
  }

  printf("The number of characters in the sentence is: %d\n", count);
}
