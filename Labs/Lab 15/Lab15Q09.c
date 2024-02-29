/*
  Description: A program to take a name as an input, and compare it to a list of names.
  Author: Ryan Pitman
  Date: 29/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 5
#define MAX 21

int nameCompare(char *input, char *names[]);

int main(void)
{
  char *names[SIZE] = {"John", "Paul", "George", "Ringo", "Pete"};
  char input[MAX];

  printf("Enter a name: ");
  scanf("%s", input);

  if (nameCompare(input, names) == 1)
  {
    printf("The name is in the list\n");
  }
  else
  {
    printf("The name is not in the list\n");
  }

  return 0;
}


int nameCompare(char *input, char *names[])
{
  for (int i = 0; i < SIZE; i++)
  {
    if (strcmp(input, names[i]) == 0)
    {
      return 1;
    }
  }
  return 0;
}