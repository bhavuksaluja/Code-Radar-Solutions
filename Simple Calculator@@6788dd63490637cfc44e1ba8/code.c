#include <stdio.h>
#include <math.h>
int main() {
    int a, b, sum, multiply, subtraction;
    float division;
    char d;
    
    // Fix: Add spaces to allow proper reading of integers and operator
    scanf("%d %d %c", &a, &b, &d);  // space between %d %d %c for better input handling

    sum = a + b;
    multiply = a * b;
    subtraction = a - b;
    division = (float)a / b;

    if (d == '+') {
        printf("%d", sum);
    } else if (d == '-') {
        printf("%d", subtraction);
    } else if (d == '*') {
        printf("%d", multiply);
    } else if (d == '/') {
        printf("%.0f", division);
    } else {
        printf("Invalid operator");
    }

    return 0;
}

