#include <stdio.h>
int main() {
    double length;
    double width;
    float area;

    printf("Input length: ");
    scanf("%f\n", &length);

    printf("Input width: ");
    scanf("f\n", &width);

    area = (length * width);
    printf("Area of rectangle is %.2f\n", area);

    return 0;
}