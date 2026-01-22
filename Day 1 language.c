#include <stdio.h>

int main() {
    int choice;
    
    printf("Select a language:\n");
    printf("1. Tamil\n");
    printf("2. English\n");
    printf("3. Hindi\n");
    printf("4. Telugu\n");
    printf("5. Malayalam\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("You selected Tamil\n");
            break;
        case 2:
            printf("You selected English\n");
            break;
        case 3:
            printf("You selected Hindi\n");
            break;
        case 4:
            printf("You selected Telugu\n");
            break;
        case 5:
            printf("You selected Malayalam\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
    
    return 0;
}
