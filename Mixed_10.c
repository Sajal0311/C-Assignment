#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, volume;
    printf("Enter radius of sphere: ");
    scanf("%f", &radius);
    volume = (4.0 / 3.0) * PI * radius * radius * radius;
    printf("Volume of sphere = %.2f\n", volume);
    return 0;
}
