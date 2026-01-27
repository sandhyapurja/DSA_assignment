#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

Node* head = NULL;

Node* createNode(int data) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = data;
    n->next = n->prev = NULL;
    return n;
}

void insertAfter(int afterValue, int data) {
    Node* temp = head;
    while (temp != NULL && temp->data != afterValue) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Node %d not found\n", afterValue);
        return;
    }
    
    Node* newNode = createNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    
    if (temp->next != NULL)
        temp->next->prev = newNode;
    
    temp->next = newNode;
    printf("Inserted %d after %d\n", data, afterValue);
}

void deleteNode(int value) {
    Node* temp = head;
    
    while (temp != NULL && temp->data != value) {
        temp = temp->next;
    }
    
    if (temp == NULL) {
        printf("Node %d not found\n", value);
        return;
    }
    
    if (temp == head)
        head = temp->next;
    
    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    
    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    
    printf("Deleted %d\n", value);
    free(temp);
}

void insertAtEnd(int data) {
    Node* newNode = createNode(data);
    
    if (head == NULL) {
        head = newNode;
        return;
    }
    
    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
    newNode->prev = temp;
}

void display() {
    if (head == NULL) {
        printf("Empty list\n");
        return;
    }
    
    Node* temp = head;
    printf("NULL <-> ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, val, afterVal;
    
    printf("Doubly Linked List\n\n");
    
    while (1) {
        printf("\n1. Insert at end\n");
        printf("2. Insert after node\n");
        printf("3. Delete node\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Value: ");
                scanf("%d", &val);
                insertAtEnd(val);
                display();
                break;
                
            case 2:
                printf("Value: ");
                scanf("%d", &val);
                printf("After: ");
                scanf("%d", &afterVal);
                insertAfter(afterVal, val);
                display();
                break;
                
            case 3:
                printf("Delete: ");
                scanf("%d", &val);
                deleteNode(val);
                display();
                break;
                
            case 4:
                display();
                break;
                
            case 5:
                return 0;
                
            default:
                printf("Invalid!\n");
        }
    }
    
    return 0;
}
