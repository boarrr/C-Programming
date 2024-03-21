/*
  Description: A program to demonstrate structures by storing biographical data about a person, with functions to display and copy data
  Author: Ryan Pitman
  Date: 21/03/2024
*/

#include <stdio.h>
#include <string.h>

#define SIZE 2

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
  person people[2];

  printf("Enter the data for person 1:\n");
  input(&people[0]);

  printf("\n---The information for person 1 is---\n");
  display_person(people[0]);

  // Copy data for person 1 into person 2
  people[1] = people[0];

  // Showing person 2 is modifiable
  strcpy(people[1].firstname, "Ricky");
  strcpy(people[1].surname, "Jervais");

  people[1].date_of_birth.day = 25;
  people[1].date_of_birth.month = 5;
  people[1].date_of_birth.year = 1984;
  
  printf("\n---The information for person 2 is---\n");
  display_person(people[1]);

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