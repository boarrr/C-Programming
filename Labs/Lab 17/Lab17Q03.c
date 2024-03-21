/*
  Description: A program to, using structures, store biographical data about a person. Including nested structures, store the information, 
  display it, copy it to another person
  Author: Ryan Pitman
  Date: 14/03/2024
*/

#include <stdio.h>
#include <string.h>

// Structure Template for Date of Birth
typedef struct date_of_birth
{
  unsigned int day;
  unsigned int month;
  unsigned int year;
} DOB;

// Structure Template for a person
typedef struct person_info
{
  char first_name[20];
  char last_name[20];
  DOB date_of_birth;
  int height;
  int weight;
  char eye_color[10];
  char country[20];
} Person;

// Function Prototypes
void input_data(Person*);
void display_person(Person);
void copy_person(Person, Person*);
void clear_buffer();


int main(void)
{
  Person person1;
  Person person2;


  // Take input for the person
  input_data(&person1);

  // Display the person
  printf("\n---Person 1 Data---\n");
  display_person(person1);

  copy_person(person1, &person2);

  // Display the copied data in person 2
  printf("\n---Person 2 Data---\n");
  display_person(person2);
  
  return 0;
}

// Input data into a person, takes a pointer to a person structure instance
void input_data(Person *person)
{
  printf("Enter a first name: ");
  fgets(person->first_name, 20, stdin);
  person->first_name[strlen(person->first_name) - 1] = '\0';

  printf("Enter a surname: ");
  fgets(person->last_name, 20, stdin);
  person->last_name[strlen(person->last_name) - 1] = '\0';

  printf("Enter the date of birth (dd-mm-yyyy): ");
  scanf("%u-%u-%u", &person->date_of_birth.day, &person->date_of_birth.month, &person->date_of_birth.year);

  printf("Enter the height in centimeters: ");
  scanf("%d", &person->height);

  // Clear the input buffer after the scanf, before the fgets
  clear_buffer();

  printf("Enter the persons eye color: ");
  fgets(person->eye_color, 10, stdin);
  person->eye_color[strlen(person->eye_color) - 1] = '\0';

  printf("Enter the persons country of citizenship: ");
  fgets(person->country, 20, stdin);
  person->country[strlen(person->country) - 1] = '\0';
}

// Displays a person, takes a person structure instance
void display_person(Person person)
{
  printf("Firstname: %s\nSurname: %s\nDate Of Birth: %u-%u-%u\nHeight: %d\nEye Color: %s\nCitzenship: %s\n", 
  person.first_name, person.last_name, person.date_of_birth.day, person.date_of_birth.month, person.date_of_birth.year, person.height, person.eye_color, person.country);
}

// Copies person1 into person2, takes a person structure instance and a pointer to the destination instance
void copy_person(Person person1, Person* person2)
{
  strcpy(person2->first_name, person1.first_name);
  strcpy(person2->last_name, person1.last_name);

  person2->date_of_birth = person1.date_of_birth;
  person2->height = person1.height;

  strcpy(person2->eye_color, person1.eye_color);
  strcpy(person2->country, person1.country);
}

// Clear the input buffer
void clear_buffer()
{
  while(getchar() != '\n');
}