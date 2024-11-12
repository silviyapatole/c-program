#include <stdio.h>
#include <string.h>

#define MAX 100

struct Person {
    char name[50];
    int age;
};
void insertionSort(struct Person arr[], int n) {
    int i, j;
    struct Person key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && strcmp(arr[j].name, key.name) > 0) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    FILE *file;
    struct Person people[MAX];
    int count = 0,i;

    file = fopen("people.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    while (fscanf(file, "%s %d", people[count].name, &people[count].age) != EOF) {
        count++;
    }

    fclose(file);

    insertionSort(people, count);

    printf("Sorted data by name:\n");
    for(i = 0; i < count; i++) {
        printf("%s\t%d\n", people[i].name, people[i].age);
    }

    return 0;
}


