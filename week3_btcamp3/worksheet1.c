#include <stdio.h>


void bronze1() {
    int num_input;
    printf("Input a number: ");
    scanf("%d", &num_input);

    if (num_input > 0){
        printf("Number is positive");
    } else if (num_input == 0){
        printf("Number is 0");
    } else {
        printf("Number is negative");
    }
}


void bronze2(){
    int num_input;
    printf("Input a number: ");
    scanf("%d", &num_input);
    if ((num_input % 4 == 0) && (num_input % 5 == 0)){
        printf("Number is divisible by both 4 and 5\n");
    } else {
        printf("Number is not divisible by 4 and 5\n");
    }
}


void silver1(){
    int mark;
    printf("Input a mark: ");
    scanf("%d", &mark);

    if (mark > 70) {
        printf ("The mark of %d is a distinction\n", mark);
    }
    else if (mark > 50) {
        printf ("The mark of %d is a pass\n", mark);
    }
    else {
        printf ("The mark of %d is a fail\n", mark);
    }
}


void silver2() {
    int temp;
    printf("Input a temperature: ");
    scanf("%d", &temp);

    if ((temp < 40) && (temp > 10)) {
        printf ("The temperature of %d is acceptable\n", temp);
    }
}


void gold1() {
    int choice;
    choice = 3;
    switch (choice) {
    case 1: printf("You have chosen 1");
        break;
    case 2: printf("You have chosen 2");
        break;
    case 3: printf("You have chosen 3");
        break;
    case 4: printf("You have chosen 4");
        break;
    case 5: printf("You have chosen 5");
        break;
    default: printf("Choice not within bounds");
        break;
    }
}


void gold2() {
    int num_input;
    printf("Input a number: ");
    scanf("%d", &num_input);

    while ((num_input > -1) && (num_input < 101)) {
        printf("Input a number: ");
        scanf("%d", &num_input);
    }
    printf("Number input is outside of the");
}


int main(){
    bronze2();
    return 0;
}
