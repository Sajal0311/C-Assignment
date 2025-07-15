#include <stdio.h>
int main() {
    int phy, chem, math;
    printf("Enter marks in Physics, Chemistry, and Mathematics: ");
    scanf("%d %d %d", &phy, &chem, &math);

    int total = phy + chem + math;

    if ((phy >= 55 && chem >= 50 && math >= 65) || total >= 180)
        printf("Eligible for admission.\n");
    else
        printf("Not eligible.\n");

    return 0;
}
