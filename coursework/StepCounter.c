#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FitnessDataStruct.h"

// Struct moved to header file

// Define any additional variables here
// Global variables for filename and FITNESS_DATA array


// This is your helper function. Do not change it in any way.
// Inputs: character array representing a row; the delimiter character
// Ouputs: date character array; time character array; steps character array
void tokeniseRecord(const char *input, const char *delimiter,
                    char *date, char *time, char *steps) {
    // Create a copy of the input string as strtok modifies the string
    char *inputCopy = strdup(input);
    
    // Tokenize the copied string
    char *token = strtok(inputCopy, delimiter);
    if (token != NULL) {        strcpy(date, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(time, token);
    }
    
    token = strtok(NULL, delimiter);
    if (token != NULL) {
        strcpy(steps, token);
    }
    
    // Free the duplicated string
    free(inputCopy);

                    }



// Complete the main function
int main() {
    printmenu();
    choice = getchar();
        while (getchar() != '\n');

        switch (choice)
        {
        case 'A':
        case 'a':
            counter = 0;
            FILE *file = fopen(filename, "r");
            while (fgets(line, buffer_size, file))
            {
                tokeniseRecord(*line, ",", date, time, steps);
                strcpy(data_array[counter].date, date);
                strcpy(data_array[counter].time, time);
                data_array[counter].steps = atoi(steps);
                counter++;
            }
            break;

        case 'B':
        case 'b':
            counter = 0;
            while (fgets(line, buffer_size, file))
            {
                // split up the line and store it in the right place
                // using the & operator to pass in a pointer to the bloodIron so it stores it
                
                counter++;
            }
            fclose(file);
            break;

        case 'C':
        case 'c':
            return 0;
            break;

        case 'D':
        case 'd':
            return 0;
            break;

        case 'E':
        case 'e':
            return 0;
            break;

        case 'F':
        case 'f':
            return 0;
            break;

        case 'G':
        case 'g':
            return 0;
            break;

        case 'Q':
        case 'q':
            return 0;
            break;

        // if they type anything else:
        default:
            printf("Invalid choice\n");
            break;
        }
    }
    