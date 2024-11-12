#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAscending(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    struct Node* current = *head;
    struct Node* previous = NULL;

    while (current != NULL && current->data < value) {
        previous = current;
        current = current->next;
    }

    if (previous == NULL) {
        newNode->next = *head;
        *head = newNode;
    } else {
        
        previous->next = newNode;
        newNode->next = current;
    }
    printf("Inserted %d in ascending order.\n", value);
}

void insertDescending(struct Node** head, int value) {
    struct Node* newNode = createNode(value);
    struct Node* current = *head;
    struct Node* previous = NULL;

    
    while (current != NULL && current->data > value) {
        previous = current;
        current = current->next;
    }

    if (previous == NULL) {
        newNode->next = *head;
        *head = newNode;
    } else {
        
        previous->next = newNode;
        newNode->next = current;
    }
    printf("Inserted %d in descending order.\n", value);
}

void searchList(struct Node* head, int value, int ascending) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            printf("Found %d in the list.\n", value);
            return;
            }
        // Early termination based on the order of the list
        if (ascending && current->data > value) {
            break;
        } else if (!ascending && current->data < value) {
            break;
        }
        current = current->next;
    }
    printf("%d not found in the list.\n", value);
}

// Display the list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    int choice, value, orderType;

    printf("Choose the list order:\n");
    printf("1. Ascending\n");
    printf("2. Descending\n");
    printf("Enter your choice: ");
    scanf("%d", &orderType);

    do {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Search element\n");
        printf("3. Display the list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                if (orderType == 1) {
                    insertAscending(&head, value);
                } else {
                    insertDescending(&head, value);
                }
                break;

            case 2:
                printf("Enter the value to search: ");
                scanf("%d", &value);
                if (orderType == 1) {
                    searchList(head, value, 1);
                } else {
                    searchList(head, value, 0);
                }
                break;

            case 3:
                displayList(head);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
            
