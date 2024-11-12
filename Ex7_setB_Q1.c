#include <stdio.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int top;
} Stack;

// Initialize the stack
void initStack(Stack* s) {
    s->top = -1;
}

// Check if the stack is full
int isFull(Stack* s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(Stack* s) {
    return s->top == -1;
}

// Push an item onto the stack
void push(Stack* s, int item) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
    }
    s->items[++(s->top)] = item;
}

// Pop an item from the stack
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    return s->items[(s->top)--];
}

// Peek at the top item of the stack
int peek(Stack* s) {
    if (isEmpty(s)) {
        return -1;
    }
    return s->items[s->top];
}

// Function to check if two stacks are identical
int areStacksIdentical(Stack s1, Stack s2) {
    // Check if both stacks have the same number of elements
    if (s1.top != s2.top) {
        return 0;  // Different sizes, not identical
    }

    // Compare each element from top to bottom
    while (s1.top != -1 && s2.top != -1) {
        if (s1.items[s1.top] != s2.items[s2.top]) {
            return 0;  // Found a mismatch
        }
        s1.top--;
        s2.top--;
    }

    return 1;  // Stacks are identical
}

int main() {
    Stack stack1, stack2;
    initStack(&stack1);
    initStack(&stack2);

    // Push elements into stack1
    push(&stack1, 10);
    push(&stack1, 20);
    push(&stack1, 30);

    // Push elements into stack2 (identical to stack1)
    push(&stack2, 10);
    push(&stack2, 20);
    push(&stack2, 30);

    // Compare stacks
    if (areStacksIdentical(stack1, stack2)) {
        printf("The stacks are identical.\n");
    } else {
        printf("The stacks are not identical.\n");
    }

    return 0;
}
