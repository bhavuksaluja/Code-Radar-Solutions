#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    if (num & 10) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}