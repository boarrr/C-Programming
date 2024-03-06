/*
Pointer variables and Structures
*/
#include <stdio.h>

#define SIZE 5

//Structure template(s)
struct student_rec
{
  int student_ID;
  char firstname[11];
  char surname[21];
  int results[5];
};

//Function signature(s) Pass by Value, a COPY is passed
void display(struct student_rec);


int main()
{
  struct student_rec student = {  1234,
                                  "Joe",
                                  "Murphy",
                                  {54, 63, 77, 90, 51}
                              };
 
  //Display the contents of the structure variable student
  display(student);
  
  return 0;

} // end main()



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