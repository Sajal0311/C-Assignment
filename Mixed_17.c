#include <stdio.h>
int main() {
    float a, b, h, area;
    printf("Enter base1, base2 and height: ");
    scanf("%f %f %f", &a, &b, &h);
    area = 0.5 * (a + b) * h;
    printf("Area of trapezoid = %.2f\n", area);
    return 0;
}
