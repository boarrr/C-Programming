/*
  Description: A program which takes a sentence from standard input, calculates the number of characters, and appends the string
  Author: Ryan Pitman
  Date: 29/02/2024
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int countChar(char*);
void append(char*, char*);

int main(void)
{
  char input[MAX - 16];
  char appendStr[MAX] = "My sentence is: "; // The string to append to the input

  printf("Enter a sentence: ");
  fgets(input, MAX - 16, stdin);

  printf("The number of characters in the sentence is: %d\n", countChar(input));

  append(input, appendStr);

  return 0;
}

// Count the number of characters in a string
int countChar(char *str)
{
  int count = 0;

  // This counts spaces as well
  while (*str != '\0')
  {
    count++;
    str++;
  }

  return count;
}

// Append a string to another string
void append(char *str, char *appendStr)
{
  strcat(appendStr, str);
  printf("%s\n", appendStr);
}