#include <stdio.h>
int main() {
    int m;
    printf("Enter value of m: ");
    scanf("%d", &m);

    int n = (m > 0) - (m < 0);
    printf("Value of n = %d\n", n);

    return 0;
}
