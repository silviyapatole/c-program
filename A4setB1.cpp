#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool compareStrings(const char *str1, const char *str2) {
    return strcmp(str1, str2) == 0;
}
void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    char original[100];
    strcpy(original, str);

    reverseString(str);
    if (compareStrings(original, str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
