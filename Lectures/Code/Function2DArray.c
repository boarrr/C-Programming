/*
This program passes a 2-D array to a function, which calculates the sum of the array and display to standard output (screen)
*/
#include <stdio.h>

#define ROW 2
#define COL 3

// Function signature
int sum_array(int [][COL]);


int main()
{
  int values[ROW][COL];
  int i,j;
  int sum = 0;

    
  printf("Enter %d numbers\n", ROW*COL);

  //Enter data into the array
  for(i = 0; i < ROW; i++)
  {
    for(j = 0; j < COL; j++)
    {
      scanf("%d", & values[i][j]);
    } // end inner for
  } // end outer for

  // Calculate the sum of the contents of the array
  sum = sum_array(values);

  // Display the sum of the contents of the array
  printf("\nThe sum of the array is %d\n", sum);

  return 0;
} // end main()



/* Function sum_array() will calculate the sum of the contents of any 2-D array
*/
int sum_array(int my_array[][COL])
{
  int total = 0;
  int i,j;


  // calculate the total of the array
  for(i = 0; i < ROW; i++)
  {
    for(j = 0; j < COL; j++)
    {
      total = total + my_array[i][j];
    } // end inner for
  } // end outer for

  return total;
} // end sum_array()