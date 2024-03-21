/*
  Description: A program to store data for a city using a structure, accessed via pointers with functions
  Author: Ryan Pitman
  Date: 21/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 2

typedef struct city
{
  char city_name[20];
  int population;
  int annual_rainfall;
  int annual_sunshine;
} city;

void input(city*);
void display(city*);
void highest_rain(city*, int);
void lowest_sunshine(city*, int);

int main(void)
{
  city cities[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    printf("\nEnter data for city %d:\n", i + 1);
    input(&cities[i]);
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("\n---Data for city %d---\n", i + 1);
    display(&cities[i]);
  }

  highest_rain(cities, SIZE);
  lowest_sunshine(cities, SIZE);

  return 0;
}


void input(city* c)
{
  printf("City name: ");
  fgets(c->city_name, 20, stdin);
  c->city_name[strlen(c->city_name) - 1] = '\0';

  printf("Population: ");
  scanf("%d", &c->population);

  printf("Annual Rainfall: ");
  scanf("%d", &c->annual_rainfall);

  printf("Annual Sunshine: ");
  scanf("%d", &c->annual_sunshine);

  while(getchar() != '\n');
}


void display(city* c)
{
  printf("City Name: %s\nPopulation: %d\nAnnual Rainfall: %d\nAnnual Sunshine: %d\n", c->city_name, c->population, c->annual_rainfall, c->annual_sunshine);
}


void highest_rain(city* arr, int size)
{
  int max = arr[0].annual_rainfall;
  char max_city[20];

  strcpy(max_city, arr[0].city_name);

  for (int i = 1; i < size; i++)
  {
    if (arr[i].annual_rainfall > max) 
    {
      max = arr[i].annual_rainfall;
      strcpy(max_city, arr[i].city_name);
    }
  }

  printf("\nThe city with the highest annual rainfall is %s\n", max_city);
}


void lowest_sunshine(city* arr, int size)
{
  int min = arr[0].annual_sunshine;
  char min_city[20];

  strcpy(min_city, arr[0].city_name);

  for (int i = 1; i < size; i++)
  {
    if (min > arr[i].annual_sunshine) 
    {
      min = arr[i].annual_sunshine;
      strcpy(min_city, arr[i].city_name);
    }
  }

  printf("\nThe city with the lowest annual sunshine is %s\n", min_city);
}