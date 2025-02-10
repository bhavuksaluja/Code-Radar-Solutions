#include <stdio.h>
#include <math.h>

int main() {
    int a, b, sum, multiply, subtraction;
    int division;
    char d;
    
    // Fix: Add spaces to allow proper reading of integers and operator
    scanf("%d %d %c", &a, &b, &d);  // space between %d %d %c for better input handling

    sum = a + b;
    multiply = a * b;
    subtraction = a - b;
    division = (int)a / b;

    if (d == '+') {
        printf("%d", sum);
    } else if (d == '-') {
        printf("%d", subtraction);
    } else if (d == '*') {
        printf("%d", multiply);
    } else if (d == '/') {
        printf("%d", division);
    } else {
        printf("Invalid operator");
    }

    return 0;
}

