#ifndef ENGLISH_H
#define ENGLISH_H

#include <stdio.h>
#include <stdlib.h>
 
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data);

void append(struct Node** head_ref, int data);

int isPresent(struct Node* head, int data);

struct Node* findCommon(struct Node* head1, struct Node* head2);

void printList(struct Node* node);

void freeList(struct Node* head);

#endif

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a node to the linked list
void append(struct Node** head_ref, int data) {
    struct Node* newNode = createNode(data);
    struct Node* last = *head_ref;

    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    while (last->next != NULL) {
        last = last->next;
    }

    last->next = newNode;
}

// Function to check if a value is already present in the list
int isPresent(struct Node* head, int data) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}

// Function to find common elements of two linked lists and store them in a third list
struct Node* findCommon(struct Node* head1, struct Node* head2) {
    struct Node* result = NULL;
    struct Node* temp1 = head1;

    // Traverse the first list
    while (temp1 != NULL) {
        struct Node* temp2 = head2;

        // Check if the current element of the first list is present in the second list
        while (temp2 != NULL) {
            if (temp1->data == temp2->data) {
                // If element is common and not already in the result list, append it
                if (!isPresent(result, temp1->data)) {
                    append(&result, temp1->data);
                }
                break;
            }
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }

    return result;
}

// Function to print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Function to free memory of a linked list
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;
    struct Node* commonList = NULL;

    int n1, n2, element, i;

    // Dynamically creating list1
    printf("Enter the number of elements in list1: ");
    scanf("%d", &n1);

    printf("Enter the elements of list1: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &element);
        append(&list1, element);
    }

    // Dynamically creating list2
    printf("Enter the number of elements in list2: ");
    scanf("%d", &n2);

    printf("Enter the elements of list2: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &element);
        append(&list2, element);
    }

    // Print both lists
    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    // Find common elements and store them in a new list
    commonList = findCommon(list1, list2);

    // Print the common elements list
    printf("Common Elements List: ");
    printList(commonList);

    // Free the memory allocated for all lists
    freeList(list1);
    freeList(list2);
    freeList(commonList);

    return 0;
}
