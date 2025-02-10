#include <stdio.h>
#include <math.h>

int main() {
    int a, b, sum, multiply, subtraction;
    float division;
    char d;
    scanf("%d%d%c", &a, &b, &d);
    sum = a + b;
    multiply = a * b;
    subtraction = a - b;
    division = (float)a / b;
    if (d == '+') {
        printf("%d", sum);
        break
    } else if (d == '-') {
        printf("%d", subtraction);
        break
    } else if (d == '*') {
        printf("%d", multiply);
        break
    } else if (d == '/') {
        printf("%.2f", division);
        break
    } else {
        printf("Invalid operator");
    }

    return 0;
}
