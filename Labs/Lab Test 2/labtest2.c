/*
 * Description: A program which implements a data structure for the 33rd Summer Olympic Games. This program should dynamically allocate..
 *            ..the number of atheletes. This program should also use a function to input data to the data structure. 
 *		There should also be a feature to search for a given name within the program in the structure.
 * 		We can assume all athletes will be competing in 100m sprint.	
 * Author: Ryan Pitman
 * Date: 11/04/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_MAX 30

struct date {
	int day;
	int month;
	int year;
};

struct athlete {
	char first_name[STRING_MAX];
	char surname[STRING_MAX];
	char nationality[STRING_MAX];
	struct date date_of_birth;
	int height;
	int weight;
	char event_name[STRING_MAX];
};

void get_athlete_count(int *count);
void input_all_athletes(struct athlete *pointer, int count);
void input_athlete(struct athlete *athlete);
void search_name(struct athlete *pointer, int count, char *firstname, char *surname, char *nationality);
int compare_name(struct athlete athlete, char *firstname, char *surname, char *nationality);
void trim_athlete_name(struct athlete *athlete);
struct athlete *allocate_memory(int count);


int main(void)
{
	int count = -1;
	struct athlete *athletes = NULL;


	// Get the count of athletes from the user
	get_athlete_count(&count);

	// Allocate memory for that many athletes and return the pointer
	athletes = allocate_memory(count);

	// Check if memory is valid
	if (athletes == NULL) {
		printf("Memory failed to allocate, exiting...\n");
		return 0;
	}

	// Input the information for the athletes
	input_all_athletes(athletes, count);

	// Check if a person with the name "Paddy Jim O'Brien" who is Irish is competing
	search_name(athletes, count, "Paddy Jim", "O'Brien", "Irish");

	// Free the athletes memory at program end
	free(athletes);

	return 0;
}


// Get the count of athletes to be entered from user, with input validation
void get_athlete_count(int *count)
{
	while(*count < 0) {

		printf("Enter the count of athletes to enter: ");
		
		// Only if the user enters an integer over 1, return
		if ((scanf("%d", count)) && *count > 0) {
			printf("You will enter %d athletes.\n\n", *count);
			return;
		}
		else {
			printf("Invalid input!\n");
			*count = -1;
		}

		// Clear buffer to prevent infinite loop
		while(getchar() != '\n');
	}
}

// Input the data for all the athletes, per user count
void input_all_athletes(struct athlete *pointer, int count)
{
	for (int i = 0; i < count; i++)
	{
		printf("---Enter data for athlete #%d---\n", i + 1);
		input_athlete(pointer + i);
		trim_athlete_name(pointer + i);
	}
}

// Input the data for a single athlete instance, clearing buffer before input to prevent issues with fgets
void input_athlete(struct athlete *athlete)
{
	while (getchar() != '\n');

	printf("Firstname: ");
	fgets(athlete->first_name, STRING_MAX - 1, stdin);
	
	printf("Surname: ");
	fgets(athlete->surname, STRING_MAX - 1, stdin);
	
	printf("Nationality: ");
	fgets(athlete->nationality, STRING_MAX - 1, stdin);

	printf("Date of Birth (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &athlete->date_of_birth.day, &athlete->date_of_birth.month, &athlete->date_of_birth.year);

	printf("Height (cm): ");
	scanf("%d", &athlete->height);

	printf("Weight (kg): ");
	scanf("%d", &athlete->weight);
	
	strcpy(athlete->event_name, "100m sprint");
}

// Function to search the athletes for a given name and nationality, iterating through all athletes and comparing
void search_name(struct athlete *athletes, int count, char *firstname, char *surname, char *nationality)
{
	for (int i = 0; i < count; i++) {
		if (compare_name(*(athletes + i), firstname, surname, nationality))
		{
			printf("\n%s %s IS competing in the 100m sprint!\n", firstname, surname);
			return;
		}
	}

	printf("\n%s %s is NOT competing in the 100m sprint!\n", firstname, surname);
}

// Helper function, compares the first name, surname and nationality entered to that of an athlete instance
int compare_name(struct athlete athlete, char *firstname, char *surname, char *nationality)
{
	if (strcmp(athlete.first_name, firstname) == 0 && strcmp(athlete.surname, surname) == 0 && strcmp(athlete.nationality, nationality) == 0)
		return 1;
	
	return 0;
}

// Remove the trailing newlines at the end of the athletes names and nationality
void trim_athlete_name(struct athlete *athlete)
{
	athlete->first_name[strlen(athlete->first_name) - 1] = '\0';
	athlete->surname[strlen(athlete->surname) - 1] = '\0';
	athlete->nationality[strlen(athlete->nationality) - 1] = '\0';
}

// Allocate memory for the count of athletes needed
struct athlete *allocate_memory(int count)
{
	struct athlete *new = malloc(sizeof(struct athlete) * count);
	return new;
}

