#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h>

#endif

int main() {
    char filename [] = "data.txt";
    FILE *file = open_file(filename, "r");
    int buffer_size = 2;
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }

    fclose(file);
    return 0;
}