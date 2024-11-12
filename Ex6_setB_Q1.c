#include<stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};
void splitList(struct Node* source, struct Node** front, struct Node** back) {
    struct Node* slow;
    struct Node* fast;
    if (source == NULL || source->next == NULL) {
        *front = source;
        *back = NULL;
    } else {
        slow = source;
        fast = source->next;

        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                slow = slow->next;
                fast = fast->next;
            }
        }

        *front = source;
        *back = slow->next;
        slow->next = NULL;
    }
}
struct Node* sortedMerge(struct Node* a, struct Node* b) {
    struct Node* result = NULL;

   
    if (a == NULL)
        return b;
    if (b == NULL)
        return a;

    if (a->data <= b->data) {
        result = a;
        result->next = sortedMerge(a->next, b);
    } else {
        result = b;
        result->next = sortedMerge(a, b->next);
    }
    return result;
}
void mergeSort(struct Node** headRef) {
    struct Node* head = *headRef;
    struct Node* a;
    struct Node* b;

    if ((head == NULL) || (head->next == NULL)) {
        return;
    }

    splitList(head, &a, &b);
    
    mergeSort(&a);
    mergeSort(&b);

    *headRef = sortedMerge(a, b);
}

void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    // Inserting elements into the linked list
    insert(&head, 10);
    insert(&head, 3);
    insert(&head, 15);
    insert(&head, 8);
    insert(&head, 1);

    printf("Original Linked List:\n");
    printList(head);

    mergeSort(&head);

    printf("\nSorted Linked List:\n");
    printList(head);

    return 0;
}
