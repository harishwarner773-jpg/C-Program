#include <stdio.h>

int main() {
    int students, subjects;
    
    printf("Enter number of students: ");
    scanf("%d", &students);
    
    printf("Enter number of subjects: ");
    scanf("%d", &subjects);
    
    float marks[students][subjects];
    float total[students];
    float average[students];
    
   
    for (int i = 0; i < students; i++) {
        printf("\nStudent %d:\n", i + 1);
        total[i] = 0;
        
        for (int j = 0; j < subjects; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &marks[i][j]);
            total[i] += marks[i][j];
        }
        
        average[i] = total[i] / subjects;
    }
    
    
    printf("\n\n--- Results ---\n");
    for (int i = 0; i < students; i++) {
        printf("Student %d - Total: %.2f, Average: %.2f\n", i + 1, total[i], average[i]);
    }
    
    return 0;
}