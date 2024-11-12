#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

struct Node* mergeLists(struct Node* list1, struct Node* list2) {
    
    struct Node* dummy = createNode(0);
    struct Node* tail = dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data <= list2->data) {
            tail->next = createNode(list1->data);
            list1 = list1->next;
        } else {
            tail->next = createNode(list2->data);
            list2 = list2->next;
        }
        tail = tail->next;
    }

    while (list1 != NULL) {
        tail->next = createNode(list1->data);
        list1 = list1->next;
        tail = tail->next;
    }

    while (list2 != NULL) {
        tail->next = createNode(list2->data);
        list2 = list2->next;
        tail = tail->next;
    }
    struct Node* mergedList = dummy->next;
    free(dummy); 
    return mergedList;
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
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    // Insert elements into the first list (sorted order)
    insertEnd(&list1, 1);
    insertEnd(&list1, 3);
    insertEnd(&list1, 5);
    insertEnd(&list1, 7);
    // Insert elements into the second list (sorted order)
    insertEnd(&list2, 2);
    insertEnd(&list2, 4);
    insertEnd(&list2, 6);
    insertEnd(&list2, 8);

    printf("List 1: ");
    printList(list1);

    printf("List 2: ");
    printList(list2);

    struct Node* mergedList = mergeLists(list1, list2);

    printf("Merged List: ");
    printList(mergedList);

    return 0;
}
