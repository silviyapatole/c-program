#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // 1 and below are not prime
    if (num <= 3) return 1; // 2 and 3 are prime

    // Check if the number is divisible by any number from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime if divisible
    }
    return 1; // Prime if not divisible by any number
}

// Function to set flags based on number properties
void setFlags(int num, int *flag1, int *flag2, int *flag3) {
    // Check if number is even
    if (num % 2 == 0) {
        *flag1 = 1;
    }

    // Check if number is prime
    if (isPrime(num)) {
        *flag2 = 1;
    }

    // Check if number is divisible by 3 or 7
    if (num % 3 == 0 || num % 7 == 0) {
        *flag3 = 1;
    }
}

int main() {
    int number, flag1 = 0, flag2 = 0, flag3 = 0;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call function to set flags
    setFlags(number, &flag1, &flag2, &flag3);

    // Display flags
    printf("Number is even: %d\n", flag1);
    printf("Number is prime: %d\n", flag2);
    printf("Number is divisible by 3 or 7: %d\n", flag3);

    return 0;
}
