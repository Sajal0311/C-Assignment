#include <stdio.h>
int main() {
    float mass, height, g = 9.8, pe;
    printf("Enter mass and height: ");
    scanf("%f %f", &mass, &height);
    pe = mass * g * height;
    printf("Potential Energy = %.2f\n", pe);
    return 0;
}
