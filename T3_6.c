#include <stdio.h>
#include <math.h>

void findRoots(float a, float b, float c) {
    float D = b * b - 4 * a * c;

    if (D > 0) {
        float root1 = (-b + sqrt(D)) / (2 * a);
        float root2 = (-b - sqrt(D)) / (2 * a);
        printf("Two real and distinct roots:\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (D == 0) {
        float root = -b / (2 * a);
        printf("Two real and equal roots:\n");
        printf("Root = %.2f\n", root);
    }
    else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-D) / (2 * a);
        printf("Two complex roots:\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
    }
}

int main() {
    float a, b, c;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("Not a quadratic equation.\n");
    } else {
        findRoots(a, b, c);
    }

    return 0;
}
