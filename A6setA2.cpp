#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *source_file, *destination_file;
    char source_filename[100], destination_filename[100];
    char ch;

    printf("Enter the name of the source file: ");
    scanf("%s", source_filename);
    printf("Enter the name of the destination file: ");
    scanf("%s", destination_filename);

    source_file = fopen(source_filename, "r");
    if (source_file == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destination_file = fopen(destination_filename, "w");
    if (destination_file == NULL) {
        printf("Error opening destination file.\n");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        if (isalpha(ch)) {
            if (islower(ch)) {
                ch = toupper(ch);
            } else {
                ch = tolower(ch);
            }
        }
        fputc(ch, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);

    printf("Contents of '%s' copied to '%s' with reversed case.\n", source_filename, destination_filename);

    return 0;
}
