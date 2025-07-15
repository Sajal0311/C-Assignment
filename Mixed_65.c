#include <stdio.h>
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}
int main() {
    for (int i = 1; i <= 1000; i++) {
        int sum = 0, temp = i;
        while (temp) {
            sum += fact(temp % 10);
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
