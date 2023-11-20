#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomarray(int r[4][5]) {
    for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 4; j++) {
                r[i][j] = rand() % 26;
            }
        }
}

int studentsum(int r[4][5], int x) {
    int total = 0;
    for(int i = 0; i < 4; i++) {
        total += r[i][x];
        printf("%i\n", total);
    }
    return total;
}

int main() {
    srand(time(NULL));

    int r [4][5];
    int x;

    randomarray(r);

    printf("Pick a student: ");
    scanf("%d", &x);
    printf("%d\n", studentsum(r, x));
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }
    return 0;
}