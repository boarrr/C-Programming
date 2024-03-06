/*
Pointer variables and Structures - Pass by Reference
*/
#include <stdio.h>
#include <string.h>

#define SIZE 5

//Structure template(s)
struct student_rec
{
  int student_ID;
  char firstname[21];
  char surname[21];
  int results[5];
};


// Function signature(s)
// Pass by Value, a COPY is passed
void display(struct student_rec);

// Pass by Reference, the address location is passed
void enter(struct student_rec *);


int main()
{
  struct student_rec student;

  // Enter the data into the structure student variable
  enter(& student);

  //Display the contents of the structure variable student
  display(student);

  return 0;
} // end main()



/*
Function enter is used to enter the contents of a structure variable parameter
*/
void enter(struct student_rec *ptr)
{
  printf("\nEnter student ID: ");
  scanf("%d", & ptr -> student_ID);

  //scanf("%d", & (*ptr).student_ID);

  // Clear the stdin buffer so that the 'Enter' key is not being read
  while(getchar() != '\n');

  printf("\nEnter first name: ");
  //scanf("%s", ptr -> firstname);
  fgets(ptr -> firstname, 21, stdin);

  printf("\nEnter surname: ");
  //scanf("%s", ptr -> surname);
  fgets(ptr -> surname, 21, stdin);

  printf("\nEnter %d results\n", SIZE);

  // Enter the results
  for(int i = 0; i < SIZE; i++)
  {
    scanf("%d", & ptr -> results[i]);
  } // end for

} // end enter()



/*
Function display is used to display the contents of a structure variable parameter
*/
void display(struct student_rec stu)
{
  printf("\nStudent Record\n");
  printf("\nID is: %d", stu.student_ID);

  // Display the first name
  printf("\n\nFirstname: %s", stu.firstname);
  
  // Display the surname
  printf("\nSurname is: %s", stu.surname);

  //Display the results
  printf("\nResults are:\n");

  for(int i = 0; i < SIZE; i++)
  {
    printf("%d\n", stu.results[i]);
  } // end for

} // end display()