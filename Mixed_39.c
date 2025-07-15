#include <stdio.h>
int main() {
    float income;
    int age;
    printf("Enter your age and monthly income: ");
    scanf("%d %f", &age, &income);

    if (age >= 21 && income >= 15000)
        printf("Eligible for loan.\n");
    else
        printf("Not eligible.\n");

    return 0;
}
