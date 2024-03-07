/*
  Description: A program to take input of a string from a user, and then (i) count the number of vowels, (ii) find the number of characters, 
  (iii) Display the string in reverse order, (iv) Concat the string to another string 
  Author: Ryan Pitman
  Date: 07/03/2024
*/

#include <stdio.h>
#include <string.h>

int countVowels(char*);
int countCharacters(char*);
void reverseString(char*, int);
void concatString(char*, char*);

int main(void)
{
  char userInput[60];
  char sentence[100] = "I entered the string: ";
  int strlen;


  // User input
  printf("Enter a string: ");
  fgets(userInput, 60, stdin);

  // Count the vowels
  printf("\nThe number of vowels in the entered string is: %d\n", countVowels(userInput));

  // Store the length of the string and print it
  strlen = countCharacters(userInput);
  printf("The string contained %d characters.\n", strlen);

  // Display the reversed string
  reverseString(userInput, strlen);

  // Concat the string to the sentence string
  concatString(sentence, userInput);
  puts(sentence);

  return 0;
}


// Function to count the vowels in the string
int countVowels(char* str)
{
  int count = 0;

  // If the current character is a vowel, iterate count
  for (int i = 0; i < strlen(str); i++)
  {
    switch(str[i])
    {
      case 'A':
      case 'a':
      case 'E':
      case 'e':
      case 'I':
      case 'i':
      case 'O':
      case 'o':
      case 'U':
      case 'u':
      {
        count++;
        break;
      }

      default:
        break;
    }
  }

  return count;
}

// Function to count the characters in the string
int countCharacters(char* str)
{
  int count = 0;

  for (int i = 0; str[i] != '\0'; i++)
  {
    count++;
  }

  // Return count of characters minus the newline at the end
  return count - 1;
}


// Dispay the string in reverse
void reverseString(char* str, int n)
{
  printf("The string in reverse is: ");

  // n - 1 to avoid the newline character
  for (int i = n - 1; i >= 0; i--)
  {
    printf("%c", str[i]);
  }

  printf("\n");
}


// Function to concat to the destination string
void concatString(char* dest, char* str)
{
  strcat(dest, str);
}