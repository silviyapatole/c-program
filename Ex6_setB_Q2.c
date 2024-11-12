#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coefficient;
    int exponent;
    struct Node* next;
};

struct Node* createNode(int coefficient, int exponent) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coefficient = coefficient;
    newNode->exponent = exponent;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int coefficient, int exponent) {
    struct Node* newNode = createNode(coefficient, exponent);
    newNode->next = *head;
    *head = newNode;
}

void printPolynomial(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%dx^%d ", temp->coefficient, temp->exponent);
        if (temp->next != NULL) {
            printf("+ ");
        }
        temp = temp->next;
    }
    printf("\n");
}

struct Node* multiplyPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;

    for (struct Node* p1 = poly1; p1 != NULL; p1 = p1->next) {
        struct Node* temp = NULL;

        for (struct Node* p2 = poly2; p2 != NULL; p2 = p2->next) {
            int coefficient = p1->coefficient * p2->coefficient;
            int exponent = p1->exponent + p2->exponent;
            insertNode(&temp, coefficient, exponent);
        }

        if (result == NULL) {
            result = temp;
        } else {
            
            struct Node* current = result;
            while (current != NULL) {
                if (current->exponent == temp->exponent) {
                    current->coefficient += temp->coefficient;  
                    break;
                }
                if (current->next == NULL) {
                    current->next = temp;  
                    break;
                }
                current = current->next;
            }
            temp = NULL;
        }
    }

    return result;
}

int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;

    insertNode(&poly1, 3, 2);
    insertNode(&poly1, 2, 1);
    insertNode(&poly1, 5, 0);

    insertNode(&poly2, 4, 1);
    insertNode(&poly2, 1, 0);

    printf("Polynomial 1: ");
    printPolynomial(poly1);

    printf("Polynomial 2: ");
    printPolynomial(poly2);

    struct Node* result = multiplyPolynomials(poly1, poly2);

    printf("Result of Multiplication: ");
    printPolynomial(result);

    return 0;
}
