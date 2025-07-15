#include <stdio.h>
int main() {
    int n, freq[10] = {0};
    scanf("%d", &n);
    while (n) {
        freq[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++)
        if (freq[i])
            printf("%d: %d\n", i, freq[i]);
    return 0;
}
