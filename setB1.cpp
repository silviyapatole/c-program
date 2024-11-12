#include <stdio.h>

void displayMinimum(int *arr, int n) {
    int min = *arr; 

    
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            min = *(arr + i);
        }
    }

    printf("Minimum value: %d\n", min);
}

int main() {
    int n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    displayMinimum(arr, n);

    return 0;
}
