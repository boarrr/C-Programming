/*
Pointer variables and Structures
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5

//Structure template(s)
struct student_rec
{
  int student_ID;
  char firstname[11];
  char surname[21];
  int results[5];
};


//Function signature(s)
// ...
// …


int main()
{
  struct student_rec student = {  1234,
                                  "Joe",
                                  "Murphy",
                                  {54, 63, 77, 90, 51}
                              };

  struct student_rec *ptr;


  //Make ptr point at the structure variable called 'student'
  ptr = &student;

  printf("\nStudent Record\n");
  printf("\nID is: %d", student.student_ID);

  //The following 2 lines of code are the same
  printf("\nID is: %d", (*ptr).student_ID);
  //can also be written  
  printf("\nID is: %d", ptr -> student_ID);

  // Display the firstname
  printf("\n\nFirstname: %s", ptr -> firstname); // student.firstname

  // Display the surname
  printf("\nSurname is: %s", ptr -> surname); // student.surname

  //Display the results
  printf("\nResults are:\n");

  for(int i = 0; i < SIZE; i++)
  {
      printf("%d\n", ptr -> results[i]); // student.results[i]
  } // end for

  return 0;

} // end main()