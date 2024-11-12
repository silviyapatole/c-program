#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10 

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high],j;
    int i=(low-1);

    for (j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void generateRandomNumbers(int arr[], int n) {
    srand(time(0));
    int i;
    for (i = 0; i < n; i++) {
    	arr[i]=rand()%10;
    }
}

void printArray(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[MAX];

    generateRandomNumbers(arr, MAX);

    printf("Unsorted array: \n");
    printArray(arr, MAX);

    quickSort(arr, 0, MAX - 1);

    printf("Sorted array: \n");
    printArray(arr, MAX);

    return 0;
}
