#include <stdio.h>
int main() {
    float voltage, current, power;
    printf("Enter voltage and current: ");
    scanf("%f %f", &voltage, &current);
    power = voltage * current;
    printf("Electrical Power = %.2f\n", power);
    return 0;
}
