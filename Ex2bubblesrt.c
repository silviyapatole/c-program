#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int n, int max_val) {
    int* output = (int*)malloc(n * sizeof(int));
    int* count = (int*)calloc(max_val + 1, sizeof(int)),i;

    for(i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (i = 1; i <= max_val; i++) {
        count[i] += count[i - 1];
    }

    for (i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    free(output);
    free(count);
}

void recursiveCountingSort(int arr[], int n, int max_val) 
{	
    if (n <= 1) {
        return;
    }

    countingSort(arr, n, max_val);

    int mid = n / 2;
    recursiveCountingSort(arr, mid, max_val);       
    recursiveCountingSort(arr + mid, n - mid, max_val);  
}

int getMax(int arr[], int n) {
    int max_val = arr[0],i;
    for (i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int main() {
    int n;

    printf("Enter the number of integers (n): ");
    scanf("%d", &n);

    int arr[n],i;

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_val = getMax(arr, n);

    recursiveCountingSort(arr, n, max_val);

    printf("Sorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
