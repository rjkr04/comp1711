#include <stdio.h>
#include <stdlib.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    unsigned mark;
};

int main () {
    struct student new_student;
    printf("Input student name: \n");
    scanf("%s", new_student.name);
    printf("Input student ID: \n");
    scanf("%s", new_student.student_id);
    printf("Input student mark: \n");
    scanf("%u", &new_student.mark);

    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %u\n", new_student.mark);
    return 0;
}