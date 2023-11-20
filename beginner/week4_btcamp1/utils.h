#ifndef UTILS_H
#define UTILS_H
#include <stdio.h>
#include <stdlib.h>

FILE *open_file(char filename[], char mode[]) {
    FILE *file = fopen(filename, mode);
    if (file == NULL) {
        perror("Invalid file name.");
        exit(1);
    }
    return file;
}

char filename[20];

#endif /* UTILS_H */