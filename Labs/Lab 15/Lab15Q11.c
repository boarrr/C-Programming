/*
  Description: A program to take input of a country and compare it to a list of countries, outputting the capital of the country.
  Author: Ryan Pitman
  Date: 29/02/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 10

int main(void)
{
  char *countries[SIZE][2] = {
    {"Australia", "Canberra"},
    {"Belgium", "Brussels"},
    {"China", "Beijing"},
    {"Denmark", "Copenhagen"},
    {"England", "London"},
    {"France", "Paris"},
    {"Greece", "Athens"},
    {"Ireland", "Dublin"},
    {"Scotland", "Edinburgh"},
    {"Wales", "Cardiff"}
  };

  char userInput[20];

  printf("Enter a country: ");
  scanf("%s", userInput);

  for (int i = 0; i < SIZE; i++)
  {
    if (strcmp(userInput, countries[i][0]) == 0)
    {
      printf("The capital of %s is %s\n", userInput, countries[i][1]);
      return 0;
    }
  }

  return 0;
}