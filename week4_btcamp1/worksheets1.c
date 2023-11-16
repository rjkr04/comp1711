#include <stdio.h>
#include <stdlib.h>
#include "utils.c"


int main() {
    char filename[] = "squares.dat";
    float avg, total, count;
    FILE *file = open_file(filename, "r");
    int buffer_size = 3;
    char line_buffer[buffer_size];

    total = 0;

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        total = total + atoi(line_buffer);
        count += 1;
    }
    avg = total / count;
    printf("Total: %.1lf Average: %.2lf\n", total, avg);
    return 0;

    
}