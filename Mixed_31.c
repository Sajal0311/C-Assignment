#include <stdio.h>
int main() {
    float height;
    printf("Enter height (in cm): ");
    scanf("%f", &height);

    if (height < 150)
        printf("Dwarf\n");
    else if (height >= 150 && height <= 165)
        printf("Average height\n");
    else
        printf("Tall\n");

    return 0;
}
