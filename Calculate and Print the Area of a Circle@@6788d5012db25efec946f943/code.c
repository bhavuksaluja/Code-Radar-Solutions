#include <stdio.h>
int main() {
    float radius;
    const float pie=3.14;
    float area;
    scanf("%f",&radius);
    area= pie * radius * radius;
    printf("Area: %.2f",area);
    return 0;
}