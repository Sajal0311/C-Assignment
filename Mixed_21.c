#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    if (a == b) {
        printf("Both numbers are equal.\n");
    } else {
        printf("Numbers are not equal.\n");
    }

    return 0;
}
