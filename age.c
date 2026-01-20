#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the number of people: ");
    scanf("%d", &n);
    
    int ages[n];
    int sum = 0;
    
    printf("Enter the ages:\n");
    for (int i = 0; i < n; i++) {
        printf("Age %d: ", i + 1);
        scanf("%d", &ages[i]);
        sum += ages[i];
    }
    
    float average = (float)sum / n;
    
    printf("\nAverage age: %.2f\n", average);
    
    return 0;
}