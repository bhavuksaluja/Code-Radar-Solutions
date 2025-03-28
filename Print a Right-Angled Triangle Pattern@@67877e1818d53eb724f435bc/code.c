#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for stars
            printf("*");
        }
        printf("\n");  // Move to the next line after each row
    }

    return 0;
}

