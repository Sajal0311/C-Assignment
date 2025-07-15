#include <stdio.h>
int main() {
    int x, y;
    printf("Enter X and Y: ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0)
        printf("1st Quadrant\n");
    else if (x < 0 && y > 0)
        printf("2nd Quadrant\n");
    else if (x < 0 && y < 0)
        printf("3rd Quadrant\n");
    else if (x > 0 && y < 0)
        printf("4th Quadrant\n");
    else if (x == 0 && y == 0)
        printf("Origin\n");
    else if (x == 0)
        printf("Y-axis\n");
    else
        printf("X-axis\n");

    return 0;
}
