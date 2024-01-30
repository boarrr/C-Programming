/*
Returning a value from a function - efficiency update to Repl 13.1
*/

#include <stdio.h>

//#define SIZE 5

// Function signature
int find_minimum(int, int);



int main()
{
   int num1, num2;
   int min = 0;

   // ** Code updated here 
   // Enter two whole numbers and check if they are equal
   do
   {
       printf("Enter any two different whole numbers\n");
       scanf("%d", & num1);
       scanf("%d", & num2);

       if(num1 == num2)
       {
           printf("\nNumbers are equal. Try again\n\n");
       } // end if
       
   } // end do
   while(num1 == num2);

    
   // Find the minimum of the two numbers
   min = find_minimum(num1, num2);

   printf("\nThe minimum of %d and %d is %d", num1, num2, min);

  return 0;

} // end main()



//Find the minimum value of two whole numbers
int find_minimum(int n1, int n2)
{    
   // if n1 is less than n2
   if(n1 < n2)
   {
       return n1;
   } // end if
   else
   {
       return n2;
   } // end else

} // end find_minimum()