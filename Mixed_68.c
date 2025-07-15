#include <stdio.h>
int main() {
    int n, val = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        val = i % 2;
        for (int j = 1; j <= i; j++) {
            printf("%d", val);
            val = 1 - val;
        }
        printf("\n");
    }
    return 0;
}
