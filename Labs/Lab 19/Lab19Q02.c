/*
 *      Description: A program to open a text file, and remove any blank lines form the file
 *      Date: 18/04/2024
 *      Author: Ryan Pitman
*/

#include <stdio.h>
#include <string.h>

#define STRING_MAX 30

int main(void)
{
        FILE *file;
        FILE *temp;

        char line[STRING_MAX];
        if((file = fopen("file3.txt", "r+")) == NULL || (temp = fopen("temp.txt", "w")) == NULL) {
                printf("Error opening file!\n");
                return 0;
        }

        while(fgets(line, STRING_MAX, file) != NULL) {
                if(line[0] != '\n') {
                        fputs(line, temp);
                }
        }

        fclose(file);
        fclose(temp);

        remove("file3.txt");
        rename("temp.txt", "file3.txt");

        return 0;
}