#include <stdio.h>
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
int findMinimum(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        min = MIN(min, arr[i]);
    }
    return min;
}
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int min = findMinimum(arr, n);
    printf("Minimum number: %d\n", min);

    return 0;
}
