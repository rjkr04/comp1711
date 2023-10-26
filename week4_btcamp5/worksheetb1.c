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
    char filename[] = "squares.dat";
    int number;
    FILE *file = open_file(filename, "w");
    printf("Pick a number to find the squares to: ");
    scanf("%d", &number);
    int i, num_squared;
    for (i = 1; i <= number; i++) {
        num_squared = i * i;
        printf("%d", num_squared);
        fprintf(file, "%d\n", num_squared);
    }
    return 0;
}