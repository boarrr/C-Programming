/*
        Description: A program to test latency difference between fgetc and fgets when reading a text file
        Author: Ryan Pitman
        Date: 25/04/2024
*/

#include <stdio.h>
#include <time.h>

#define STRING_MAX 30

int main(void)
{
        clock_t start_t, end_t;
        double total_t;
        FILE *file;
        char temp_char;
        char temp_str[STRING_MAX];


        if ((file = fopen("gists.txt", "r")) == NULL) {
                printf("Error opening file!\n");
                return 0;
        }

        // Get the time taken to reach the end of file with fgetc
        start_t = clock();
        while((temp_char = fgetc(file)) != EOF);
        end_t = clock();

        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC * 1000;

        printf("fgetc read the file in %.2fms\n", total_t);

        rewind(file);

        // Get the time taken to reach the end of file with fgets
        start_t = clock();
        while ((fgets(temp_str, STRING_MAX, file)) != NULL);
        end_t = clock();

        total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC * 1000;

        printf("fgets read the file in %.2fms\n", total_t);

        fclose(file);
        
        return 0;
}