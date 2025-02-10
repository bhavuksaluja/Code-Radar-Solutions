#include <stdio.h>
int main() {
    int number, i;
    scanf("%d", &number);
    if (number <= 1) {
        printf("Not Prime");
    } else {
        int isPrime = 1;
        for (i = 2; i < number; i++) {
            if (number % i == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime)
            printf("Prime");
        else
            printf("Not Prime");
    }

    return 0;
}
