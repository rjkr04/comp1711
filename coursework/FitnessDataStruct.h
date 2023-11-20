#ifndef FITNESS_DATA_STRUCT_H
#define FITNESS_DATA_STRUCT_H

#include <stdio.h>

// Define an appropriate struct
typedef struct {
	char date[11];
	char time[6];
	int steps;
} FITNESS_DATA;

FITNESS_DATA data_array[200];
#define buffer_size 100
char line[buffer_size];
char filename[buffer_size];
char choice;
int counter = 0;
char date[11];
char time[7];
char steps[7];
int isfileopen = 0;
int total_steps = 0, fewest_steps, most_steps = 0;
int index_log;
float mean;

void printmenu()
{
    printf("A: Specify the filename to be imported \nB: Display the total number of records in the file \nC: Find the date and time of the timeslot with the fewest steps \nD: Find the data and time of the timeslot with the largest number of steps \nE: Find the mean step count of all the records in the file \nF: Find the longest continuous period where the step count is above 500 steps \nQ: Exit\n");
}

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        printf("Error: could not open file ");
        exit(1);
    }
    return file;
    isfileopen = 1;
}
// Helper function prototypes
void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);

#endif // FITNESS_DATA_STRUCT_H