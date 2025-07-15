#include <stdio.h>
int main() {
    int units;
    float bill = 0;
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 100)
        bill = units * 1.5;
    else if (units <= 200)
        bill = 100 * 1.5 + (units - 100) * 2.0;
    else
        bill = 100 * 1.5 + 100 * 2.0 + (units - 200) * 3.0;

    printf("Electricity Bill = ₹%.2f\n", bill);
    return 0;
}
