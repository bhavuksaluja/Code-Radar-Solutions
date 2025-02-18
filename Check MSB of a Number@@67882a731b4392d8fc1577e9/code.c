#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int bitpostion= sizeof(num);
    if (num & 1) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}