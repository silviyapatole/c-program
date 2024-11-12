#include <stdio.h>

int FirstOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1; // Default result if target is not found

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Target found, continue to search in the left half
            right = mid - 1; // Move to left side to find first occurrence
        } else if (arr[mid] < target) {
            left = mid + 1; // Move right
        } else {
            right = mid - 1; // Move left
        }
    }
    return result;
}

int LastOccurrence(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    int result = -1; // Default result if target is not found

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid; // Target found, continue to search in the right half
            left = mid + 1; // Move to right side to find last occurrence
        } else if (arr[mid] < target) {
            left = mid + 1; // Move right
        } else {
            right = mid - 1; // Move left
        }
    }
    return result;
}

int main() {
    // Example sorted array with multiple occurrences
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int firstOccurrence = findFirstOccurrence(arr, size, target);
    int lastOccurrence = findLastOccurrence(arr, size, target);

    if (firstOccurrence != -1) {
        printf("First occurrence of %d is at index: %d\n", target, firstOccurrence);
    } else {
        printf("%d not found in the array.\n", target);
    }

    if (lastOccurrence != -1) {
        printf("Last occurrence of %d is at index: %d\n", target, lastOccurrence);
    } else {
        printf("%d not found in the array.\n", target);
    }

    return 0;
}

