#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, height, volume;
    printf("Enter radius and height: ");
    scanf("%f %f", &radius, &height);
    volume = PI * radius * radius * height;
    printf("Volume of cylinder = %.2f\n", volume);
    return 0;
}
