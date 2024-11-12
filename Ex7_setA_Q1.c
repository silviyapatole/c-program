#ifndef STACK_H
#define STACK_H

#define MAX 5  

// Function declarations
void push(int stack[], int *top, int value);
int pop(int stack[], int *top);
int peek(int stack[], int top);
int isEmpty(int top);
int isFull(int top);
void display(int stack[], int top);

#endif

// Push operation
void push(int stack[], int *top, int value) {
    if (isFull(*top)) {
        printf("Stack overflow! Cannot push %d\n", value);
    } else {
        stack[++(*top)] = value;
        printf("Pushed %d into the stack.\n", value);
    }
}

// Pop operation
int pop(int stack[], int *top) {
    if (isEmpty(*top)) {
        printf("Stack underflow! Cannot pop.\n");
        return -1;
    } else {
        int value = stack[(*top)--];
        printf("Popped %d from the stack.\n", value);
        return value;
    }
}

// Peek operation
int peek(int stack[], int top) {
    if (isEmpty(top)) {
        printf("Stack is empty! No top element.\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Check if stack is empty
int isEmpty(int top) {
    return top == -1;
}

// Check if stack is full
int isFull(int top) {
    return top == MAX - 1;
}

// Display the stack
void display(int stack[], int top) {
	int i;
    if (isEmpty(top)) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
int main() {
    int stack[MAX];  // Stack array
    int top = -1;    // Initial top of the stack

    // Test the stack operations
    push(stack, &top, 10);
    push(stack, &top, 20);
    push(stack, &top, 30);
    push(stack, &top, 40);
    push(stack, &top, 50);

    display(stack, top);

    printf("Peek: %d\n", peek(stack, top));

    pop(stack, &top);
    pop(stack, &top);

    display(stack, top);

    push(stack, &top, 60);
    push(stack, &top, 70);  // This will cause overflow since MAX is 5

    display(stack, top);

    return 0;
}
