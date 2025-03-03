#include <stdio.h>
int main(int argc, char *argv[]) {
    FILE *source_file, *destination_file;
    char ch;

    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    source_file = fopen(argv[1], "r");
    if (source_file == NULL) {
        printf("Error: Unable to open source file.\n");
        return 1;
    }

    destination_file = fopen(argv[2], "w");
    if (destination_file == NULL) {
        printf("Error: Unable to open destination file.\n");
        fclose(source_file);
        return 1;
    }

    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
    }

    fclose(source_file);
    fclose(destination_file);

    printf("Contents of '%s' copied to '%s' successfully.\n", argv[1], argv[2]);

    return 0;
}
