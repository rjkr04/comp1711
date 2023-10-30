#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *open_file(char filename[], char mode[]);

typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

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
    char filename[50] = "FitnessData_2023.csv";
    int buffer_size = 100;
    char line_buffer[buffer_size];
    int count = 0;

    FILE *file = open_file(filename, "r");

    char date[11];
    char time[7];
    char steps[7];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        tokeniseRecord(line_buffer, ",", date, time, steps);
        strcpy(data_array[count].date, date);
        strcpy(data_array[count].time, time);
        data_array[count].steps = atoi(steps);
        count ++;
    }
    printf("Number of records in file: %d\n", count);
    for (int i = 0; i < 3; i ++) {
        printf("%s/%s/%d\n", data_array[i].date, data_array[i].time, data_array[i].steps);
    }
    fclose(file);
    return 0;
}

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}