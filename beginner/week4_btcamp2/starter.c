#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("");
        exit(1);
    }
    return file;
}

int main() {
    char filename [] = "input.txt";
    FILE *file = open_file(filename, "r");
    int buffer_size = 100;
    char line_buffer[buffer_size], second_buff[buffer_size];
    int count = 0;
    while (fgets(line_buffer, buffer_size, file) != NULL) {
        if (atoi(line_buffer) > 1000) {
            count += 1;
        }
    }
    printf("%d\n", count);
    fclose(file);
    return 0;
}