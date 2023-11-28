/*
  Lab Test 1
  Description: A program to calculate and store Fibonnaci numbers to the nth term, up to a maximum of 20 terms.
  Author: Ryan Pitman | C23741429
  Date: 27/11/2023
*/

#include <stdio.h>
#include <stdlib.h>

// Max terms to calculate, allows for flexibility if needed
#define MAX_TERMS 20

// Function Declaration
void calculateFibonacci(int numTerms);

int main(void)
{
  // User input variable
  int userInput = 0;


  // Main menu loop
  printf("Welcome to the Fibonnaci series program\n\nEnter your selection:\n");
  do
  {
    printf("1. Calculate Fibonnaci series\n");
    printf("2. End Program\n");

    scanf("%d", &userInput);

    switch(userInput)
    {
      // Calculate the Fibonnaci sequence
      case 1:
      {
        // Local variable to store the number of terms to calculate
        int numTerms = 0;


        printf("\nEnter the number of terms to calculate, up to %d: ", MAX_TERMS);
        scanf("%d", &numTerms);

        // Check if the number of terms is valid, and then calculate the Fibonnaci sequence
        if (numTerms > 0 && numTerms <= MAX_TERMS)
        {
          calculateFibonacci(numTerms);
        }
        // If the number of terms is invalid, return to the main menu
        else
        {
          printf("\n--Invalid number of terms, returning to main menu--\n\n\n");
        }
       break;
      }

      // Exit the program
      case 2:
      {
        printf("\n--Exiting--\n");
        break;
      }

      // Invalid input handling
      default:
      {
        printf("\n--Invalid input, try again--\n\n\n");
        break;
      }
    }
  } while (userInput != 2);

  return 0;
}

void calculateFibonacci(int numTerms)
{
  // Assign memory for the array, unsigned as Fibonacci numbers are never negative
  unsigned int* fibonacci = malloc(numTerms * sizeof(unsigned int));


  // Check if memory was allocated successfully
  if (fibonacci == NULL)
  {
    printf("Error allocating memory\n");
  }
  // If memory was allocated successfully, calculate the Fibonnaci sequence
  else
  {
    // Assign first two terms as 0 and 1, as they are constant
    *(fibonacci + 0) = 0;
    *(fibonacci + 1) = 1;

    // Calculate the remaining terms. Each term is the sum of the two previous terms from memory
    for (int i = 2; i < numTerms; i++)
    {
      *(fibonacci + i) = *(fibonacci + (i - 1)) + *(fibonacci + (i - 2));
    }

    // Print the Fibonnaci sequence from memory
    printf("\n--Fibonnaci sequence--\n");

    for (int i = 0; i < numTerms; i++)
    {
      printf("%d ", *(fibonacci + i));
    }
    printf("\n\n");

    // Free the memory allocated for the array
    free(fibonacci);
  }
}