/*
  Program that uses an array of strings, i.e., it specifically uses an array of pointers, each pointer will point to the memory address of the first character of that string
*/
#include <stdio.h>

#define SIZE 12


int main()
{
    char *months[SIZE] = {"Jan", "February", "March", "April", "May", "June", "July", "Aug", "Sep", "Oct", "Nov", "December"};
                      
    int i;
    
    /* Display each string contained in the array to standard output
    */
    printf("\nThe months of the year are:\n");
    
    for(i = 0; i < SIZE; i++)
    {
       printf("%s\n", months[i]);      
    } // end for
    
    return 0;
    
} // end main()