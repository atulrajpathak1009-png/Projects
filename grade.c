#include <stdio.h>
int main() {
    int grade;
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    if (grade >= 90 && grade <= 100) {
        printf("Your grade is A.\n");
    } else if (grade >= 80 && grade < 90) {
        printf("Your grade is B.\n");
    } else if (grade >= 70 && grade < 80) {
        printf("Your grade is C.\n");
    } else if (grade >= 60 && grade < 70) {
        printf("Your grade is D.\n");
    } else if (grade >= 0 && grade < 60) {
        printf("Your grade is F.\n");
    } else {
        printf("Invalid grade entered. Please enter a number between 0 and 100.\n");
    }

    return 0;
}