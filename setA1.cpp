#include <stdio.h>
void performArithmetic(int num1, int num2) {
    printf("Sum: %d\n", num1 + num2);
    printf("Difference: %d\n", num1 - num2);
    printf("Product: %d\n", num1 * num2);
    if (num2 != 0)
        printf("Quotient: %d\n", num1 / num2);
    else
        printf("Cannot divide by zero\n");
}

int main() {
    int num1, num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("Enter first integer: ");
    scanf("%d", ptr1);

    printf("Enter second integer: ");
    scanf("%d", ptr2);

    printf("Performing arithmetic operations:\n");
    performArithmetic(num1, num2);

    return 0;
}

