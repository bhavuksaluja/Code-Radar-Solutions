#include <stdio.h>

int main() {
    int year;
    printf("Enter the value:");
    scanf("%d", &year);

    if (year % 400 = 0) {
        printf("Leap Year");
    } else if (year % 100 == 0) {
        printf("Leap Year");
    } else if (year % 4 == 0) {
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }

    return 0;
}
