#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void append(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
}
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
    printf("Appended %d to the list.\n", value);
}
void insert(struct Node** head, int value, int position) {
	int i;
    struct Node* newNode = createNode(value);
    if (position == 0) {
        newNode->next = *head;
        if (*head != NULL) {
            (*head)->prev = newNode;
        }
        *head = newNode;
        printf("Inserted %d at position %d.\n", value, position);
        return;
    }
    struct Node* temp = *head;
    for (i = 0; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position %d is out of bounds.\n", position);
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;

    if (newNode->next != NULL) {
        newNode->next->prev = newNode;
    }

    printf("Inserted %d at position %d.\n", value, position);
}
void deleteNode(struct Node** head, int value) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    while (temp != NULL) {
        if (temp->data == value) {
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            } else {
                *head = temp->next;
            }

            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }

            free(temp);
            printf("Deleted node with value %d.\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("Node with value %d not found.\n", value);
}

void deleteAtPosition(struct Node** head, int position) {
	int i;
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;

    if (position == 0) {
        *head = temp->next; 
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        printf("Deleted node at position %d.\n", position);
        return;
    }

    for (i = 0; temp != NULL && i < position; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position %d is out of bounds.\n", position);
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    free(temp);
    printf("Deleted node at position %d.\n", position);
}

void search(struct Node* head, int value) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            printf("Found node with value %d.\n", value);
            return;
        }
        temp = temp->next;
    }
    printf("Node with value %d not found.\n", value);
}
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL; 
    int choice, value, position;

    do {
        printf("\nMenu:\n");
        printf("1. Append\n");
        printf("2. Insert\n");
        printf("3. Delete specific node\n");
        printf("4. Delete at position\n");
        printf("5. Search\n");
        printf("6. Display\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to append: ");
                scanf("%d", &value);
                append(&head, value);
                break;

            case 2:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                printf("Enter position to insert at: ");
                scanf("%d", &position);
                insert(&head, value, position);
                break;

            case 3:
                printf("Enter value of node to delete: ");
                scanf("%d", &value);
                deleteNode(&head, value);
                break;

            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;

            case 5:
                printf("Enter value to search for: ");
                scanf("%d", &value);
                search(&head, value);
                break;

            case 6:
                displayList(head);
                break;

            case 7:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
