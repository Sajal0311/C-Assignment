#include <stdio.h>
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) f *= i;
    return f;
}
int main() {
    int n, sum = 0, temp;
    scanf("%d", &n);
    temp = n;
    while (temp) {
        sum += fact(temp % 10);
        temp /= 10;
    }
    printf("%s", sum == n ? "Strong" : "Not Strong");
    return 0;
}
