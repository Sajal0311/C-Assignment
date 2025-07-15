#include <stdio.h>
int main() {
    int n, min = 9, d;
    scanf("%d", &n);
    while (n) {
        d = n % 10;
        if (d < min) min = d;
        n /= 10;
    }
    printf("%d", min);
    return 0;
}
