#include <stdio.h>
int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible to vote.\n");
    else
        printf("Not eligible.\n");

    return 0;
}
