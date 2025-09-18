#include <stdio.h>

// Function to convert percentage to German grade
float convertToGermanGrade(float percentage) {
    if (percentage >= 90) return 1.0;
    else if (percentage >= 85) return 1.3;
    else if (percentage >= 80) return 1.7;
    else if (percentage >= 75) return 2.0;
    else if (percentage >= 70) return 2.3;
    else if (percentage >= 65) return 2.7;
    else if (percentage >= 60) return 3.0;
    else if (percentage >= 55) return 3.3;
    else if (percentage >= 50) return 3.7;
    else if (percentage >= 45) return 4.0;
    else return 5.0; // failed
}

int main() {
    float percentage;
    printf("===== German Grade Converter =====\n");
    printf("Enter your percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
        return 1;
    }

    float grade = convertToGermanGrade(percentage);
    printf("Percentage: %.2f%% -> German Grade: %.1f\n", percentage, grade);

    if (grade <= 4.0) {
        printf("Result: Passed \n");
    } else {
        printf("Result: Failed \n");
    }

    return 0;
}

