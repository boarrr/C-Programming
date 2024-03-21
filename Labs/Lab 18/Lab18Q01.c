/*
  Description: A program which uses structs to store information for airline passengers
  Author: Ryan Pitman
  Date: 21/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 2

typedef struct passengers
{
  char airline[20];
  int flight_num;
  char surname[20];
  int seat_number;
  char destination[20];
  int no_of_bags;
} passenger;

void input(passenger*, int num);
void display(passenger);

int main(void)
{
  passenger passengers[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    input(&passengers[i], i + 1);
  }

  display(passengers[0]);
  display(passengers[1]);
  

  return 0;
}

void input(passenger *arr, int num)
{
  printf("\n---Enter the information for passenger %d---\n", num);

  printf("Airline Name: ");
  fgets(arr->airline, 20, stdin);
  arr->airline[strlen(arr->airline) - 1] = '\0';

  printf("Passenger %d Surname: ", num);
  fgets(arr->surname, 20, stdin);
  arr->surname[strlen(arr->surname) - 1] = '\0';

  printf("Passenger %d Destination: ", num);
  fgets(arr->destination, 20, stdin);
  arr->destination[strlen(arr->destination) - 1] = '\0';

  printf("Flight number: ");
  scanf("%d", &arr->flight_num);

  printf("Seat number: ");
  scanf("%d", &arr->seat_number);

  printf("Number of bags: ");
  scanf("%d", &arr->no_of_bags);

  while(getchar() != '\n');
}

void display(passenger p)
{
  printf("\n---Passenger Info---\n");
  printf("Airline: %s\nSurname: %s\nDestination: %s\nFlight Num: %d\nSeat Number: %d\nNumber of Bags: %d", 
    p.airline, p.surname, p.destination, p.flight_num, p.seat_number, p.no_of_bags);
}