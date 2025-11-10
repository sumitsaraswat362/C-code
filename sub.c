#include <stdio.h>

int main() {
    int a, b, c, sub;

    // Taking input from user
    printf("Enter the value of first number: ");
    scanf("%d", &a);

    printf("Enter the value of second number: ");
    scanf("%d", &b);

    printf("Enter the value of third number: ");
    scanf("%d", &c);

    // Subtraction
    sub = a - b - c;

    // Printing result
    printf("The subtraction of %d - %d - %d is: %d\n", a, b, c, sub);

    return 0;
}