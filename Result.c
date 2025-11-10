#include <stdio.h>

int main() {
    int marks[5], total = 0, fail = 0;
    float percentage;
    char grade;

    printf("Enter marks of 5 subjects: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
        if (marks[i] < 40) {
            fail++;  
        }
    }

    percentage = total / 5.0; 

     
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 60) {
        grade = 'C';
    } else if (percentage >= 40) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    printf("Total = %d, Percentage = %.1f%%, Grade = %c, Fail = %d\n", total, percentage, grade, fail);

    return 0;
}