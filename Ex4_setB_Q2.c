#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    int data;
    struct Node* next;
};
void append(struct Node** last, int n, int random) {
    struct Node* newNode;
    int value,i;
    
    for (i = 0; i < n; i++) {
        if (random) {
           
            value = rand() % 10 + 1;
        } else {
           
            printf("Enter value %d: ", i + 1);
            scanf("%d", &value);
        }

        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;

        if (*last == NULL) {
           
            *last = newNode;
            (*last)->next = *last; 
        } else {
           
            newNode->next = (*last)->next;  
            (*last)->next = newNode;        
            *last = newNode;               
        }
        printf("Appended %d to the list.\n", value);
    }
}

void display(struct Node* last) {
    if (last == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = last->next;  

    printf("Circular List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != last->next);  
    printf("(back to head)\n");
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node* last = NULL; 
    int choice, n, random;

    srand(time(0));

    do {
        printf("\nMenu:\n");
        printf("1. Append elements to the list\n");
        printf("2. Display the list\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the number of elements to append: ");
                scanf("%d", &n);

                printf("Generate random values? (1 for Yes, 0 for No): ");
                scanf("%d", &random);

                append(&last, n, random);
                break;

            case 2:
                display(last);
                break;

            case 3:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
