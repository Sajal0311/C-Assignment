#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int j = 1; j <= 2*(n - i); j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) printf("*");
        for (int j = 1; j <= 2*(n - i); j++) printf(" ");
        for (int j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
    return 0;
}
