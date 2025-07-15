#include <stdio.h>
int main() {
    int a, b, c, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    
    max = (a + b + abs(a - b)) / 2;
    
    max = (max + c + abs(max - c)) / 2;

    printf("Greatest number = %d\n", max);
    return 0;
}
