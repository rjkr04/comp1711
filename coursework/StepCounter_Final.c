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
    FITNESS_DATA data_array[200];
    char option = "'K'";
    char filename;
    int buffer_size = 100;
    char line_buffer[buffer_size];
    int count = 0;
    char date[11];
    char time[7];
    char steps[7];
    printf("A: Specify the filename to be imported \nB: Display the total number of records in the file \nC: Find the date and time of the timeslot with the fewest steps \nD: Find the data and time of the timeslot with the largest number of steps \nE: Find the mean step count of all the records in the file \nF: Find the longest continuous period where the step count is above 500 steps \nQ: Exit");
    while (option /= 'Q')
        printf("Select an option: \n");
        scanf("%c", option);
        switch (option) {
        case 'A':
            printf("Input filename: ");
            scanf("%s", filename);
            FILE *file = open_file(filename, "r");
            return 1;
        break;
        case 'B':
            while (fgets(line_buffer, buffer_size, file) != NULL) {
            count ++;
            printf("Total records: %d\n", count);
            }
        break;
        case 'C':
            FITNESS_DATA fewest_steps;
            fewest_steps.steps = 10000;
            while (fgets(line_buffer, buffer_size, file) != NULL) {
                tokeniseRecord(line_buffer, ",", date, time, steps);
                    if (fewest_steps.steps < steps) {
                        strcpy(fewest_steps.date, date);
                        strcpy(fewest_steps.time, time);
                        fewest_steps.steps = atoi(steps);
                    }
            }
        break;
        case 'D':
            FITNESS_DATA highest_steps;
            fewest_steps.steps = 0;
            while (fgets(line_buffer, buffer_size, file) != NULL) {
                tokeniseRecord(line_buffer, ",", date, time, steps);
                    if (fewest_steps.steps > steps) {
                        strcpy(fewest_steps.date, date);
                        strcpy(fewest_steps.time, time);
                        fewest_steps.steps = atoi(steps);
                    }
            }
        break;
        case 'E':
            FITNESS_DATA highest_steps;
            fewest_steps.steps = 0;
            while (fgets(line_buffer, buffer_size, file) != NULL) {
                tokeniseRecord(line_buffer, ",", date, time, steps);
                    if (fewest_steps.steps > steps) {
                        strcpy(fewest_steps.date, date);
                        strcpy(fewest_steps.time, time);
                        fewest_steps.steps = atoi(steps);
                    }
            }
        break;
        case 'F':
        // statements
        break;
        case 'Q':
        // statements
        break;
        default:
        // default statements
        }
}