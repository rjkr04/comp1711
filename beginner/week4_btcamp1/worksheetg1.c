#include <stdio.h>
#include <stdlib.h>
#include "utils.c"

int main() {
    char filename[] = "numbers.txt";
    FILE *file = open_file(filename, "a+");
    int buffer_size = 2;
    char line_buffer[buffer_size];
    float total, count, avg;

    total = 0;

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        total = total + atoi(line_buffer);
        count += 1;
    }
    avg = total / count;
    fprintf(file, "%.2lf\n", avg);
}