#ifndef TAG_H  
#define TAG_H

#include <stdlib.h>

typedef struct TaggedValue {
    int value;  
    int tag;    
} TaggedValue;

// Define the stack structure
typedef struct Stack {
    TaggedValue *array;  // Dynamic array to hold stack elements
    int top;             // Index of the top element
    int capacity;        // Maximum capacity of the stack
} Stack;

// Function declarations
Stack* createStack(int capacity);
void push(Stack *stack, int value, int tag);
TaggedValue pop(Stack *stack);
TaggedValue peek(Stack *stack);
int isEmpty(Stack *stack);
void display(Stack *stack);
void freeStack(Stack *stack);
void resize(Stack *stack);

#endif
// Function to create a stack with a given capacity
Stack* createStack(int capacity) {
    Stack *stack = (Stack*) malloc(sizeof(Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (TaggedValue*) malloc(stack->capacity * sizeof(TaggedValue));
    return stack;
}

// Push operation with dynamic resizing if the stack is full
void push(Stack *stack, int value, int tag) {
    if (stack->top == stack->capacity - 1) {
        resize(stack);
    }
    stack->array[++(stack->top)].value = value;
    stack->array[stack->top].tag = tag;
    printf("Pushed (%d, tag: %d) into the stack.\n", value, tag);
}

// Pop operation
TaggedValue pop(Stack *stack) {
    TaggedValue result = {-1, -1}; // Initialize with error values
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop.\n");
    } else {
        result = stack->array[(stack->top)--];
        printf("Popped (%d, tag: %d) from the stack.\n", result.value, result.tag);
    }
    return result;
}

// Peek operation
TaggedValue peek(Stack *stack) {
    TaggedValue result = {-1, -1}; // Initialize with error values
    if (isEmpty(stack)) {
        printf("Stack is empty! No top element.\n");
    } else {
        result = stack->array[stack->top];
    }
    return result;
}

// Check if the stack is empty
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Resize the stack when it's full
void resize(Stack *stack) {
    stack->capacity *= 2;
    stack->array = (TaggedValue*) realloc(stack->array, stack->capacity * sizeof(TaggedValue));
    printf("Stack resized to capacity %d.\n", stack->capacity);
}

// Display all elements of the stack
void display(Stack *stack) {
	int i;
    if (isEmpty(stack)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements:\n");
        for (i = 0; i <= stack->top; i++) {
            printf("Value: %d, Tag: %d\n", stack->array[i].value, stack->array[i].tag);
        }
    }
}

// Free the allocated memory for the stack
void freeStack(Stack *stack) {
    free(stack->array);
    free(stack);
}
int main() {
    int initialCapacity = 2;

    // Create a stack with an initial capacity of 2
    Stack *stack = createStack(initialCapacity);

    // Test stack operations
    push(stack, 10, 1);  // Push value 10 with tag 1
    push(stack, 20, 2);  // Push value 20 with tag 2
    display(stack);      // Display stack contents

    push(stack, 30, 3);  // This will trigger a resize
    push(stack, 40, 4);
    display(stack);      // Display stack contents after more pushes

    TaggedValue topValue = peek(stack); // Peek the top value
    printf("Peek: Value: %d, Tag: %d\n", topValue.value, topValue.tag);

    pop(stack);          // Pop the top value
    pop(stack);          // Pop another value
    display(stack);      // Display stack contents after pops

    push(stack, 50, 5);  // Push new values
    push(stack, 60, 6);
    display(stack);      // Display final stack contents

    // Clean up dynamically allocated memory
    freeStack(stack);

    return 0;
}
