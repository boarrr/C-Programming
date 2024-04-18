/*
 *      Description: A program to open two text files and compare them, the program should display any differences between the two files
 *      Date: 18/04/2024
 *      Author: Ryan Pitman
*/

#include <stdio.h>
#include <string.h>

#define STRING_MAX 30

int main(void)
{
        FILE *file1;
        FILE *file2;
        char file1_line[STRING_MAX];
        char file2_line[STRING_MAX];


        if((file1 = fopen("file1.txt", "r")) == NULL || (file2 = fopen("file2.txt", "r")) == NULL) {
                printf("Error opening file!\n");
                return 0;
        }

        while(fgets(file1_line, STRING_MAX, file1) != NULL && fgets(file2_line, STRING_MAX, file2) != NULL) {
                if(strcmp(file1_line, file2_line) != 0)
                        printf("\nDifference found: {\n\t%s\t%s}\n", file1_line, file2_line);
                else 
                        printf("\nNo difference found: {\n\t%s\t%s}\n", file1_line, file2_line);
        }

        fclose(file1);
        fclose(file2);

        return 0;
}