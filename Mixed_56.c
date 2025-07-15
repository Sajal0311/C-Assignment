#include <stdio.h>
#include <math.h>
int main() {
    for (int i = 1; i <= 1000; i++) {
        int n = i, sum = 0, temp = i, digits = 0;
        while (temp) {
            digits++;
            temp /= 10;
        }
        temp = n;
        while (temp) {
            sum += pow(temp % 10, digits);
            temp /= 10;
        }
        if (sum == i)
            printf("%d ", i);
    }
    return 0;
}
