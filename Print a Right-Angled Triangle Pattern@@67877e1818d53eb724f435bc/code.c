#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = n; i <= 1; i++) { // Loop for rows
        for (int j = 1; j >= i; j--) { // Loop for printing stars
            printf("*");
        }
        printf("\n"); // Move to the next line
    }

    return 0;
}
