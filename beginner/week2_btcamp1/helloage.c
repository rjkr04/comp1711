#include <stdio.h>
int main() {
    int age;
    printf("Hello, please enter your age: ");
    scanf("%d", &age);   //& allows you to directly access the memory location
    printf("Your age is %d\n", age);
    return 0;
}