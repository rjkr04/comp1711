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
    while (1)
    {
        printmenu();
        scanf("%s", &choice);

        switch (choice)
        {
        case 'A':
        case 'a':
            printf("Input filename: \n");
            scanf("%s", filename);
            counter = 0;
            FILE *file = fopen(filename, "r");
            while (fgets(line, buffer_size, file) != NULL)
            {
                tokeniseRecord(line, ",", date, time, steps);
                strcpy(data_array[counter].date, date);
                strcpy(data_array[counter].time, time);
                data_array[counter].steps = atoi(steps);
                counter++;
            }
            printf("File successfully loaded. \n");
            fclose(file);
            break;

        case 'B':
        case 'b':
            if (isfileopen == 0) {printf("No file opened. "); break;}
            printf("Total records: %i\n", counter);
            break;

        case 'C':
        case 'c':
            if (isfileopen == 0) {printf("No file opened. "); break;}
            fewest_steps = data_array[0].steps;
            for (int i = 0; i < counter; i++) {
                if (fewest_steps > data_array[i].steps)
                    fewest_steps = data_array[i].steps;
                    index_log = i;
            }
            printf("Fewest Steps: %s %s\n", data_array[index_log].date, data_array[index_log].time);
            break;

        case 'D':
        case 'd':
            if (isfileopen == 0) {printf("No file opened. "); break;}
            for (int i = 0; i < counter; i++) {
                if (most_steps < data_array[i].steps) {
                    printf("Most%i, Step%i\n", most_steps, data_array[i].steps);
                    most_steps = data_array[i].steps;
                    printf("Most after change: %i\n", most_steps);
                    index_log = i;
                }
            }
            printf("Largest Steps: %s %s\n", data_array[index_log].date, data_array[index_log].time);
            break;

        case 'E':
        case 'e':
            if (isfileopen == 0) {printf("No file opened. "); break;}
            for (int i = 0; i <= counter; i++) {
                total_steps += data_array[i].steps;
            }
            mean = total_steps / counter;
            printf("Mean step count: %.0f\n", mean);
            break;
        case 'F':
        case 'f':
            if (isfileopen == 0) {printf("No file opened. "); break;}
            int index = 0, start_index = 0, end_index = 0, end_count = 0, temp_count;
            for (int i = 0; i <= counter; i++) {
                if (data_array[i].steps > 500) {
                    index = i;
                    temp_count = 0;
                    while (data_array[index].steps > 500)
                    {
                        temp_count += 1;
                        index += 1;
                    }
                    if (end_count < temp_count) {
                    end_count = temp_count;
                    start_index = i;
                    end_index = index;
                    }
                    i = index;
                }
            }
            printf("Longest period start: %s %s\n", data_array[start_index].date, data_array[start_index].time);
            printf("Longest period end: %s %s\n", data_array[end_index].date, data_array[end_index].time);
            break;
        case 'Q':
        case 'q':
            return 0;
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
        