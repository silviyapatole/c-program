#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char filename1[100], filename2[100];
    char ch1, ch2;
    int different = 0;

    printf("Enter the name of the first file: ");
    scanf("%s", filename1);
    printf("Enter the name of the second file: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    if (file1 == NULL) {
        printf("Error opening first file.\n");
        return 1;
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL) {
        printf("Error opening second file.\n");
        fclose(file1);
        return 1;
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            different = 1;
            break;
        }
    }

    if (ch1 != EOF || ch2 != EOF) {
        different = 1;
    }

    fclose(file1);
    fclose(file2);

    if (different) {
        printf("Files are different.\n");
    } else {
        printf("Files are the same.\n");
    }

    return 0;
}
