/*
        Description: A program to read lines from a file, and to display the line number beside each line read within the file
        Author: Ryan Pitman
        Date: 25/04/2024
*/

#include <stdio.h>

#define STRING_MAX 30

int main(void)
{
        FILE *file;
        char temp_str[STRING_MAX];
        int line_count = 1;


        // Open the file for reading
        if ((file = fopen("file.txt", "r")) == NULL) {
                printf("Error opening file!\n");
                return 0;
        }

        // Iterate through the file, displaying the line and incrementing the line count
        while ((fgets(temp_str, STRING_MAX, file)) != NULL) 
                printf("%d: %s", line_count++, temp_str);
        

        // Close the file
        fclose(file);

        return 0;
}