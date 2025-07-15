#include <stdio.h>
int main() {
    float balance = 1000.00, amount;
    char choice;

    printf("Enter transaction type (D for deposit, W for withdraw): ");
    scanf(" %c", &choice);

    if (choice == 'D') {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        balance += amount;
    } else if (choice == 'W') {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= balance)
            balance -= amount;
        else
            printf("Insufficient balance.\n");
    } else {
        printf("Invalid choice.\n");
    }

    printf("Current Balance: ₹%.2f\n", balance);
    return 0;
}
