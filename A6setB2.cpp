#include <stdio.h>

int main() {
    FILE *input_file, *even_file, *odd_file;
    char input_filename[100], even_filename[100], odd_filename[100];
    int num;

    printf("Enter the name of the input file: ");
    scanf("%s", input_filename);

    input_file = fopen(input_filename, "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    printf(even_filename, "even_%s", input_filename);
    even_file = fopen(even_filename, "w");
    if (even_file == NULL) {
        printf("Error creating even numbers file.\n");
        fclose(input_file);
        return 1;
    }

    printf(odd_filename, "odd_%s", input_filename);
    odd_file = fopen(odd_filename, "w");
    if (odd_file == NULL) {
        printf("Error creating odd numbers file.\n");
        fclose(input_file);
        fclose(even_file);
        return 1;
    }
    
    while (fscanf(input_file, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(even_file, "%d\n", num);
        } else {
            fprintf(odd_file, "%d\n", num);
        }
    }

    fclose(input_file);
    fclose(even_file);
    fclose(odd_file);

    printf("Even and odd numbers written to files successfully.\n");

    return 0;
}
