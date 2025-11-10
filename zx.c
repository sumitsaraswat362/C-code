#include <stdio.h>

int main() {
    int a, b, c, sum;

    printf("Enter the value first number: ");
    scanf("%d", &a);

    printf("Enter the value second number: ");
    scanf("%d", &b);

    printf("Enter the value third number: ");
    scanf("%d", &c);
    
    sum = a + b + c;

    printf("The sum of %d, %d and %d is: %d\n", a, b, c, sum);

    return 0;
}