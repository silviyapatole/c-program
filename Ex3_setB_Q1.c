#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define MAX_NAME_LENGTH 50
#define MAX_AGE 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    float salary;
} Employee;

int readEmployees(Employee employees[], const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("Error: Cannot open file %s\n", filename);
        return 0;
    }

    int count = 0;
    while (fscanf(file, "%s %d %f", employees[count].name, &employees[count].age, &employees[count].salary) != EOF) {
        count++;
    }

    fclose(file);
    return count;
}

void writeEmployees(Employee employees[], int count, const char *filename) {
	int i;
    FILE *file = fopen(filename, "w");
    if (!file) {
        printf("Error: Cannot open file %s\n", filename);
        return;
    }

    for (i = 0; i < count; i++) {
        fprintf(file, "%s %d %.2f\n", employees[i].name, employees[i].age, employees[i].salary);
    }

    fclose(file);
}

void countingSort(Employee employees[], int n) {
    Employee output[MAX_EMPLOYEES];
    int count[MAX_AGE + 1] = {0},i;

    for (i = 0; i < n; i++) {
        count[employees[i].age]++;
    }

    for (i = 1; i <= MAX_AGE; i++) {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--) {
        output[count[employees[i].age] - 1] = employees[i];
        count[employees[i].age]--;
    }

    for (i = 0; i < n; i++) {
        employees[i] = output[i];
    }
}

void merge(Employee arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid,i,j,k;

    Employee L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i].age <= R[j].age) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(Employee arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void swap(Employee *a, Employee *b) {
    Employee temp = *a;
    *a = *b;
    *b = temp;
}

int partition(Employee arr[], int low, int high) {
    int pivot = arr[high].age;
    int i = (low - 1),j;
    for (j = low; j <= high - 1; j++) {
        if (arr[j].age < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(Employee arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int n = readEmployees(employees, "emp.txt");

    if (n == 0) {
        return 1;
    }

    countingSort(employees, n);
    writeEmployees(employees, n, "counting_sorted_emp.txt");

    n = readEmployees(employees, "emp.txt");

    mergeSort(employees, 0, n - 1);
    writeEmployees(employees, n, "merge_sorted_emp.txt");

    n = readEmployees(employees, "emp.txt");

    quickSort(employees, 0, n - 1);
    writeEmployees(employees, n, "quick_sorted_emp.txt");

    printf("Sorting complete! Sorted data is saved in respective files.\n");

    return 0;
}
