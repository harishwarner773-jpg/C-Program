#include <stdio.h>
#include <string.h>

int main() {
    int password = 1234;
    int attempts = 0;
    int maxAttempts = 3;
    int balance = 5000;
    int choice, amount;
    int enteredPassword;

    printf("===== ATM TRANSACTION SYSTEM =====\n\n");

    while (attempts < maxAttempts) {
        printf("Enter your PIN: ");
        scanf("%d", &enteredPassword);

        if (enteredPassword == password) {
            printf("PIN Correct! Access Granted.\n\n");

            while (1) {
                printf("1. Check Balance\n");
                printf("2. Withdraw\n");
                printf("3. Deposit\n");
                printf("4. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                switch (choice) {
                    case 1:
                        printf("Your Balance: Rs. %d\n\n", balance);
                        break;
                    case 2:
                        printf("Enter amount to withdraw: ");
                        scanf("%d", &amount);
                        if (amount > balance) {
                            printf("Insufficient Balance!\n\n");
                        } else {
                            balance -= amount;
                            printf("Withdrawal Successful! New Balance: Rs. %d\n\n", balance);
                        }
                        break;
                    case 3:
                        printf("Enter amount to deposit: ");
                        scanf("%d", &amount);
                        balance += amount;
                        printf("Deposit Successful! New Balance: Rs. %d\n\n", balance);
                        break;
                    case 4:
                        printf("Thank you! Goodbye.\n");
                        return 0;
                    default:
                        printf("Invalid choice!\n\n");
                }
            }
        } else {
            attempts++;
            printf("Incorrect PIN! Attempts remaining: %d\n\n", maxAttempts - attempts);
        }
    }

    printf("CARD BLOCKED! Maximum attempts exceeded.\n");
    return 0;
}