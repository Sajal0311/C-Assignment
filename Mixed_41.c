#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial of negative number doesn't exist.\n");
    else {
        for (int i = 1; i <= n; i++)
            fact *= i;

        printf("Factorial of %d is %llu\n", n, fact);
    }

    return 0;
}
