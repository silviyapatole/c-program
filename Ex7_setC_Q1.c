#include <stdio.h>
#include <stdlib.h>

// Define the stack structure
typedef struct Stack {
    int *items;
    int top;
    int maxSize;
} Stack;

// Function to create a stack of given capacity
Stack* createStack(int capacity) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->maxSize = capacity;
    stack->top = -1;
    stack->items = (int *)malloc(capacity * sizeof(int));
    return stack;
}

// Stack operations
int isEmpty(Stack *stack) {
    return stack->top == -1;
}

int isFull(Stack *stack) {
    return stack->top == stack->maxSize - 1;
}

void push(Stack *stack, int item) {
    if (!isFull(stack)) {
        stack->items[++stack->top] = item;
    } else {
        printf("Stack Overflow\n");
    }
}

// Modified pop function to return the popped element
int pop(Stack *stack, int *poppedElement) {
    if (!isEmpty(stack)) {
        *poppedElement = stack->items[stack->top--];
        return 1; // Indicate success
    } else {
        printf("Stack Underflow\n");
        return 0; // Indicate failure
    }
}

void copyStack(Stack *sourceStack, Stack *targetStack) {
    // Create a temporary stack
    Stack *tempStack = createStack(sourceStack->maxSize);
    
    // Step 1: Pop all items from the source stack and push them onto the temporary stack
    int item;
    while (!isEmpty(sourceStack)) {
        pop(sourceStack, &item);
        push(tempStack, item);
    }

    // Step 2: Pop all items from the temporary stack and push them onto the target stack
    while (!isEmpty(tempStack)) {
        pop(tempStack, &item);
        push(targetStack, item);
    }

   
    free(tempStack->items);
    free(tempStack);
}

void displayStack(Stack *stack) {
	int i;
    for (i = 0; i <= stack->top; i++) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {

    Stack *originalStack = createStack(10);
    push(originalStack, 1);
    push(originalStack, 2);
    push(originalStack, 3);

    printf("Original Stack: ");
    displayStack(originalStack);

    Stack *copiedStack = createStack(10);

    copyStack(originalStack, copiedStack);

    printf("Copied Stack: ");
    displayStack(copiedStack);

    int poppedValue;
    if (pop(originalStack, &poppedValue)) {
        printf("Popped Value: %d\n", poppedValue);
    }

    free(originalStack->items);
    free(originalStack);
    free(copiedStack->items);
    free(copiedStack);

    return 0;
}
