#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;
    int word_count = 0, line_count = 0, char_count = 0;

    printf("Enter the file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        char_count++;

        if (ch == ' ' || ch == '\t' || ch == '\n') {
            word_count++;
        }

        if (ch == '\n') {
            line_count++;
        }
    }

    if (char_count > 0) {
        word_count++;
    }

    if (char_count > 0) {
        line_count++;
    }

    fclose(file);

    printf("Number of words in the file: %d\n", word_count);
    printf("Number of lines in the file: %d\n", line_count);
    printf("Number of characters in the file: %d\n", char_count);

    return 0;
}
