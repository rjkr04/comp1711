#include <stdio.h>

int main() {
    char filename[10];
    scanf("%s", filename);
    FILE *file = fopen(filename, "w"); // or "a", "w+", "a+"
    if (file == NULL) {
        perror("s");
        return 1;
    }

    int number, num_lines = 10;
    printf("Type %d numbers: ", num_lines);
    for (int i = 0; i < num_lines; i++) {
        scanf("%d", &number);
        fprintf(file, "%d\n", number);
    }

    fclose(file);
    return 0;
}