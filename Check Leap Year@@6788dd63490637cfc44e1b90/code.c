#include <stdio.h>
int main() {
    int year;
    scanf("%d", &year);

    // First check if divisible by 4
    if (year % 4 == 0) {
        // Check if divisible by 100
        if (year % 100 == 0) {
            // Finally, check if divisible by 400
            if (year % 400 == 0) {
                printf("Leap Year");
            } else {
                printf("Not a Leap Year");
            }
        } else {
            printf("Leap Year");
        }
    } else {
        printf("Not a Leap Year");
    }

    return 0;
}

