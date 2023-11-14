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
int buffer_size = 100;
char line_buffer[buffer_size];

void printmenu()
{
    printf("A: Specify the filename to be imported \nB: Display the total number of records in the file \nC: Find the date and time of the timeslot with the fewest steps \nD: Find the data and time of the timeslot with the largest number of steps \nE: Find the mean step count of all the records in the file \nF: Find the longest continuous period where the step count is above 500 steps \nQ: Exit");
}

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("Error: could not open file ");
        return(1);
    }
    return file;
}
// Helper function prototypes
void tokeniseRecord(const char *input, const char *delimiter, char *date, char *time, char *steps);

#endif // FITNESS_DATA_STRUCT_H