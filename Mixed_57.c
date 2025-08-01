#include <stdio.h>
#include <math.h>
int main() {
    int n, sum = 0, temp, digits = 0;
    scanf("%d", &n);
    temp = n;
    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    printf("%s", sum == n ? "Armstrong" : "Not Armstrong");
    return 0;
}
