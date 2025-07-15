#include <stdio.h>
#define PI 3.14159
int main() {
    int choice;
    float area, r, l, b;

    printf("1. Circle\n2. Rectangle\n3. Exit\nEnter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            area = PI * r * r;
            printf("Area of circle = %.2f\n", area);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            area = l * b;
            printf("Area of rectangle = %.2f\n", area);
            break;
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
