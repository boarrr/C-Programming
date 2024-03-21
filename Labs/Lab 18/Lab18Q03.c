/*
  Description: A program to demonstrate structures by storing biographical data about a person using an array to store 3 instances
  Author: Ryan Pitman
  Date: 21/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 3

typedef struct date
{
  int day;
  int month;
  int year;
} date;

typedef struct person
{
  char firstname[20];
  char surname[20];
  date date_of_birth;
  int height;
  int weight;
  char eye_color[20];
  char citizenship[20];
} person;


void input(person*);
void display_person(person);


int main(void)
{
  person people[SIZE];

  for (int i = 0; i < SIZE; i++)
  {
    printf("\nEnter the information for person %d:\n", i + 1);
    input(&people[i]);
  }

  for (int i = 0; i < SIZE; i++)
  {
    printf("\n---Data for person %d---\n", i + 1);
    display_person(people[i]);
  }
  return 0;
}

// Input function for a person instance
void input(person* person)
{
  printf("Enter a first name: ");
  fgets(person->firstname, 20, stdin);
  person->firstname[strlen(person->firstname) - 1] = '\0';

  printf("Enter a surname: ");
  fgets(person->surname, 20, stdin);
  person->surname[strlen(person->surname) - 1] = '\0';

  printf("Enter the date of birth (dd-mm-yyyy): ");
  scanf("%u-%u-%u", &person->date_of_birth.day, &person->date_of_birth.month, &person->date_of_birth.year);

  printf("Enter the height in centimeters: ");
  scanf("%d", &person->height);

  // Clear the input buffer after the scanf, before the fgets
  while(getchar() != '\n');

  printf("Enter the persons eye color: ");
  fgets(person->eye_color, 10, stdin);
  person->eye_color[strlen(person->eye_color) - 1] = '\0';

  printf("Enter the persons country of citizenship: ");
  fgets(person->citizenship, 20, stdin);
  person->citizenship[strlen(person->citizenship) - 1] = '\0';
}

// Displays a person, takes a person structure instance
void display_person(person person)
{
  printf("Firstname: %s\nSurname: %s\nDate Of Birth: %02u-%02u-%u\nHeight: %d\nEye Color: %s\nCitzenship: %s\n", 
  person.firstname, person.surname, person.date_of_birth.day, person.date_of_birth.month, person.date_of_birth.year, person.height, person.eye_color, person.citizenship);
}