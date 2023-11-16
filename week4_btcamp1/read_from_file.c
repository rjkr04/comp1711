#include "utils.h"
#include <stdio.h>
#include <stdlib.h>


int main() {
    printf("Input file name: ");
    scanf("%s", filename);
    FILE *file = open_file(filename, "r");
    int buffer_size = 100;
    char line_buffer[buffer_size];

    while (fgets(line_buffer, buffer_size, file) != NULL) {
        printf("%d\n", atoi(line_buffer));
    }

    fclose(file);
    return 0;
}