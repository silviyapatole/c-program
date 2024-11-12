#include <stdio.h>
#include <stdlib.h>

struct Node {
    int coeff;  
    int pow;    
    struct Node* next;
};

struct Node* createNode(int coeff, int pow) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

void insertEnd(struct Node** poly, int coeff, int pow) {
    struct Node* newNode = createNode(coeff, pow);
    if (*poly == NULL) {
        *poly = newNode;
    } else {
        struct Node* temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printPoly(struct Node* poly) {
    while (poly != NULL) {
        printf("%d*x^%d", poly->coeff, poly->pow);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

struct Node* addPolynomials(struct Node* poly1, struct Node* poly2) {
    struct Node* result = NULL;
    
    while (poly1 != NULL && poly2 != NULL) {
        if (poly1->pow == poly2->pow) {
            insertEnd(&result, poly1->coeff + poly2->coeff, poly1->pow);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        else if (poly1->pow > poly2->pow) {
            insertEnd(&result, poly1->coeff, poly1->pow);
            poly1 = poly1->next;
        }
        else {
            insertEnd(&result, poly2->coeff, poly2->pow);
            poly2 = poly2->next;
        }
    }
    
    while (poly1 != NULL) {
        insertEnd(&result, poly1->coeff, poly1->pow);
        poly1 = poly1->next;
    }

    while (poly2 != NULL) {
        insertEnd(&result, poly2->coeff, poly2->pow);
        poly2 = poly2->next;
    }
    
    return result;
}
int main() {
    struct Node* poly1 = NULL;
    struct Node* poly2 = NULL;
    struct Node* result = NULL;

    // Polynomial 1: 3x^3 + 4x^2 + 2x^1
    insertEnd(&poly1, 3, 3);
    insertEnd(&poly1, 4, 2);
    insertEnd(&poly1, 2, 1);

    // Polynomial 2: 5x^3 + 2x^2 + 6x^1 + 8x^0
    insertEnd(&poly2, 5, 3);
    insertEnd(&poly2, 2, 2);
    insertEnd(&poly2, 6, 1);
    insertEnd(&poly2, 8, 0);

    // Display the polynomials
    printf("Polynomial 1: ");
    printPoly(poly1);

    printf("Polynomial 2: ");
    printPoly(poly2);

    // Add the two polynomials
    result = addPolynomials(poly1, poly2);

    // Display the result
    printf("Sum of Polynomial 1 and Polynomial 2: ");
    printPoly(result);

    return 0;
}
