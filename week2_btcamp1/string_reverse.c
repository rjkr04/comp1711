#include <stdio.h>
int main() {
    int i;
    char name[7] = "Martin";
    char reverse[7];

    for (i = 6; i > -1; i--) {
        reverse[6 - i] = name[i];
        printf("%c\n", reverse[6 - i]);
    }

    printf("%s\n", reverse);
    return 0;
}