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

struct Node* findCommon(struct Node* head1, struct Node* head2) {
    struct Node* result = NULL;
    struct Node* temp1 = head1;

    while (temp1 != NULL) {
        struct Node* temp2 = head2;

        while (temp2 != NULL) {
            if (temp1->data == temp2->data) {
                
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

void printList(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

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

    printf("Enter the number of elements in list1: ");
    scanf("%d", &n1);

    printf("Enter the elements of list1: ");
    for (i = 0; i < n1; i++) {
        scanf("%d", &element);
        append(&list1, element);
    }

    printf("Enter the number of elements in list2: ");
    scanf("%d", &n2);

    printf("Enter the elements of list2: ");
    for (i = 0; i < n2; i++) {
        scanf("%d", &element);
        append(&list2, element);
    }

    printf("List 1: ");
    printList(list1);
    printf("List 2: ");
    printList(list2);

    commonList = findCommon(list1, list2);

    printf("Common Elements List: ");
    printList(commonList);

    freeList(list1);
    freeList(list2);
    freeList(commonList);

    return 0;
}
