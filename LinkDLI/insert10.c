#include <stdio.h>
#include <stdlib.h>

// Define the structure for a Node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list with n elements
struct Node* createLinkedList(int n) {
    struct Node* head = NULL;
    struct Node* temp = NULL;

    for (int i = 1; i <= n; i++) {
        struct Node* newNode = createNode(i);
        if (head == NULL) {
            head = newNode;  // Initialize head for the first node
        } else {
            temp->next = newNode;  // Link the new node to the last node
        }
        temp = newNode;  // Move temp to the new node
    }

    return head;
}

// Function to display the linked list
void displayLinkedList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    int n = 10;

    // Create the linked list with 10 elements
    struct Node* head = createLinkedList(n);

    // Display the linked list
    printf("Linked List: ");
    displayLinkedList(head);

    return 0;
}
