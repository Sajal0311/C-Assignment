#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, circumference;
    printf("Enter radius: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("Circumference of circle = %.2f\n", circumference);
    return 0;
}
