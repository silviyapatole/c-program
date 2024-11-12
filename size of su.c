#include <stdio.h>

// Define a structure
struct MyStruct {
    int x;
    char y;
    float z;
};

// Define a union
union MyUnion {
    int x;
    char y;
    float z;
};

int main() {
    struct MyStruct s;
    union MyUnion u;

    printf("Size of struct MyStruct: %lu bytes\n", sizeof(s));
    printf("Size of union MyUnion: %lu bytes\n", sizeof(u));

    return 0;
}
