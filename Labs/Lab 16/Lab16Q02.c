/*
  Description: A program to read a string from the user, and using functions compares it to the string "Hello World", and count how often the word
              "is" shows up in the entered string.
  Author: Ryan Pitman
  Date: 07/04/2024
*/

#include <stdio.h>
#include <string.h>

#define STR_MAX 30

void stringCompare(char*);
int countIs(char*);

int main(void)
{
  char userInput[STR_MAX];

  // Get user input
  printf("Enter a string: ");
  fgets(userInput, STR_MAX, stdin);

  // Compare the string
  stringCompare(userInput);
  
  // Count the number of times "is" appears in the string
  printf("The word \"is\" appears %d times in the string.\n", countIs(userInput));

  return 0;
}

// Compare the string to Hello World, and return if it matches or not
void stringCompare(char* str)
{
  const char* testStr = "Hello World\n";

  if (strcmp(testStr, str) < 0)
  {
    printf("String does not match\n");
    return;
  }

  printf("The string matches \"Hello World\"\n");
}

// Count the number of times "is" appears in the string
int countIs(char* str)
{
  int count = 0;

 for (int i = 0; str[i] != '\0'; i++)
    {
      if (i == 0 || str[i - 1] == ' ') // Is "is" at the start or after a space?
      {
        if (str[i] == 'i' && str[i + 1] == 's' && (str[i + 2] == '\0' || str[i + 2] == ' '|| str[i + 2] == '\n')) // Is it the standalone "is"?
        {
          count++; // If so, increment count
        }
      }
    }



  return count;
}