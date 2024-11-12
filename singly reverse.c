#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head = NULL;

// Function to insert node at the beginning of the list
void insertion_beginning() {
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("\nOVERFLOW");
        return;
    }
    printf("\nEnter Item value: ");
    scanf("%d", &item);

    ptr->data = item;
    ptr->prev = NULL;
    if (head == NULL) {
        ptr->next = NULL;
        head = ptr;
    } else {
        ptr->next = head;
        head->prev = ptr;
        head = ptr;
    }
    printf("\nNode inserted\n");
}

// Function to display the list
void display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("\nThe list is empty\n");
        return;
    }
    printf("\nPrinting values...\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

// Function to reverse the list
void reverse() {
    struct node *temp = NULL;
    struct node *current = head;

    // Swap next and prev pointers for all nodes of the doubly linked list
    while (current != NULL) {
        // Swap prev and next pointers
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        // Move to the next node in the original list (which is now prev in the reversed list)
        current = current->prev;
    }

    // Before changing the head, check if the list was empty or had only one element
    if (temp != NULL) {
        head = temp->prev;
    }
    
    printf("\nList reversed\n");
}

// Main function
int main() {
    int choice;
    while (1) {
        printf("\n**** Main Menu ****\n");
        printf("\n1. Insert at begin");
        printf("\n2. Reverse");
        printf("\n3. Display");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                insertion_beginning();
                break;
            case 2:
                reverse();
                break;
            case 3:
                display();
                break;
            default:
                printf("\nInvalid choice. Try again.\n");
                break;
        }
    }
    return 0;
}

