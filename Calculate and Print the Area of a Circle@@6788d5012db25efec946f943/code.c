#include <stdio.h>
int main() {
    float r;
    const float pie=3.14;
    float area;
    scanf("%f",r);
    area= pie * r * r;
    printf("Area: %.2f",area);
    return 0;
}