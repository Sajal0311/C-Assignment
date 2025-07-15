#include <stdio.h>
int main() {
    float mass, velocity, ke;
    printf("Enter mass and velocity: ");
    scanf("%f %f", &mass, &velocity);
    ke = 0.5 * mass * velocity * velocity;
    printf("Kinetic Energy = %.2f\n", ke);
    return 0;
}
