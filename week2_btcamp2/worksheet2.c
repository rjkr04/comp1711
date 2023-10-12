#include <stdio.h>
#include <stdbool.h>


void task1() {
    int num_array[4], a, total;
    total = 0;

    for (a = 0; a < 5; a++) {
        printf("Input number for array position: %d\n", a);
        scanf("%d", &num_array[a]);
        total += num_array[a];
    }
    printf("Total = %d\n", total);
}


void task2() {
    int num_array[4], reverse[4], a;

    for (a = 0; a < 5; a++) {
        printf("Input number for array position: %d", a);
        scanf("%d", &num_array[a]);
    }
    for (a = 0; a < 5; a++) {
        reverse[a] = num_array[4 - a];
    }
    printf("Reversed Array: ");
    for (a = 0; a < 5; a++) {
        printf("%d ", reverse[a]);
    }
    printf("\n");
}


void task3() {
    int num_array[4], max, a;
    max = 0;
    for (a = 0; a < 5; a++) {
        printf("Input number for array position %d\n:", a);
        scanf("%d", &num_array[a]);
        if (max < num_array[a]) {
            max = num_array[a];
        }
    }
    printf("Greatest number in array: %d\n", max);
}


void task4() {
    int num_array[4], shifted_array[4], a;
    for (a = 0; a < 5; a++) {
        printf("Input number for array position %d\n:", a);
        scanf("%d", &num_array[a]);
        if ((a + 1) > 4) {
            shifted_array[0] = num_array[a];
        } else {
            shifted_array[a + 1] = num_array[a];
        }
    }
    printf("Shifted Array: ");
    for (a = 0; a < 5; a++) {
        printf("%d ", shifted_array[a]);
    }
    printf("\n");
}


void task5() {
    int num_array[5], num_array_comp[5], count_num_array[5], a, b, c;
    bool contains;

    for (a = 0; a < 6; a++) {
        printf("Input number for array position %d:", a);
        scanf("%d\n", &num_array[a]);
        b = 0;
        contains = false;
        while ((contains == false) || (b == 6)) {
            if (num_array_comp[b] = num_array[a]) {
            contains = true;
            count_num_array[b] += 1;
            }
        b++;
        c = 1;
            if ((contains = false) && (num_array_comp[0] == NULL)) {
                num_array_comp[0] = num_array[a];
                count_num_array[0] = 1;
            } elif (contains == false) {                   
                while (c < 6 && num_array_comp[c - 1] != NULL) {
                num_array_comp[c] = num_array[a];
                count_num_array[c] = 1;
            }
            }       
        }
    } 
}


int main() {
    task4();
    return 0;
}
