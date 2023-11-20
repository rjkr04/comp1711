#include <stdio.h>


float circleArea(float r) {
    


    float pi = 3.142;
    float area;
    area = pi * r * r;
    return area;
}


float sphereVolume(float r) {
    float pi = 3.142;
    float volume;
    volume = (4 / 3) * pi * r * r * r;
    return volume;
}


int str_len(char *s) {
    int count;
    while (s[count] != '\0') {
        count++;
    }
    printf("Length of string is %d\n", count);
}


int isPrime(int num) {
    int check = 1;
    int i= 2;
    if (num % 2 == 0) {
        check = 0;
    }
    while (check == 1) {
        if (num % i == 0) {
            check = 0;
        }
        i++;
    }
    return check;
}


char concatStrings(char *string1, char *string2) {
    int str1len, str2len;
    char newString;
    str1len = str_len(str1len);
    str2len = str_len(str2len);
    int i, j;
    newString = string1;
    for (i = str1len; i <= str1len + str2len; i ++) {
        newString[&i] = string2[j];
    }
}


int main() {
    int check = 50;
    printf("%d\n", isPrime(check));
    return 0;
}