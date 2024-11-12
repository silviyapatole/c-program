#include <stdio.h>

void displayReverse(int *arr, int n) {
    printf("Elements of the array in reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    displayReverse(arr, n);

    return 0;
}
