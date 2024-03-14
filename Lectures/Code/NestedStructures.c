/*
  Nested Structures
*/

#include <stdio.h>

#define LENGTH 11
#define S_LENGTH 21
#define SIZE 5


//Structure template(s)
struct date
{
  int day;
  int month;
  int year;
};


struct student_rec
{
  int student_ID;
  char firstname[LENGTH];
  char surname[S_LENGTH];
  int results[SIZE];
  struct date DOB;
};


// Function signature(s)
// …

int main()
{
  struct student_rec student;
  
  
  printf("\nEnter ID:\n");
  scanf("%d", & student.student_ID);
  
  // Clear input buffer
  while(getchar() != '\n');
  
  printf("\nEnter first name:\n");
  fgets(student.firstname, LENGTH, stdin);
  
  printf("\nEnter surname:\n");
  fgets(student.surname, S_LENGTH, stdin);
  
  printf("\nEnter %d results\n", SIZE);
  
  for(int i = 0; i < SIZE; i++)
  {
    scanf("%d", & student.results[i]);
  } // end for
  
  printf("\nEnter date of birth");
  printf("\n(order: day, month, year)\n");

  scanf("%d", & student.DOB.day);
  scanf("%d", & student.DOB.month);
  scanf("%d", & student.DOB.year);
  
  
  // Display data entered into the stu variable
  //
  printf("\nStudent record is:");
  printf("\nID: %d", student.student_ID);
  printf("\nFirst name: %s", student.firstname);
  printf("\nSurname: %s", student.surname);
  printf("\nResults are: ");
  
  for(int i = 0; i < SIZE; i++)
  {
    printf("%d\n ", student.results[i]);
  } // end for
  
  printf("\nDate of Birth:");
  printf("\nDay %d", student.DOB.day);
  printf("\nMonth %d", student.DOB.month);
  printf("\nYear %d", student.DOB.year);
  
  return 0;
    
} // end main()