#include <stdio.h>

int main() {
    FILE *file;
    char filename[100], character;
    int count = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);
    printf("Enter the character to count: ");
    scanf(" %c", &character);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == character) {
            count++;
        }
    }

    fclose(file);

    printf("The character '%c' occurs %d times in the file '%s'.\n", character, count, filename);

    return 0;
}
