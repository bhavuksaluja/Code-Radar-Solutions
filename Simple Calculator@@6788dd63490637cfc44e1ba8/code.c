#include <stdio.h>
#include <math.h>

int main() {
    int a, b, sum, multiply, subtraction;
    float division;  // Change to float to handle decimal division
    char d;

    // Input two integers and an operator
    scanf("%d%d%c", &a, &b, &d);

    // Perform calculations
    sum = a + b;
    multiply = a * b;
    subtraction = a - b;
    division = (float)a / b;  // Explicit type casting for float division

    // Output the result based on the operator
    if (d == '+') {
        printf("%d", sum);
    } else if (d == '-') {
        printf("%d", subtraction);
    } else if (d == '*') {
        printf("%d", multiply);
    } else if (d == '/') {
        printf("%.2f", division);  // Printing the division result with 2 decimal places
    } else {
        printf("Invalid operator");
    }

    return 0;
}
