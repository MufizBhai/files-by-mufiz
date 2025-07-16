#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end
struct Node* insertAtEnd(struct Node* head, int data) 
{
    struct Node* newNode = createNode(data);

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Function to copy a linked list
struct Node* copyList(struct Node* head) {
    struct Node* newHead = NULL;
    struct Node* temp = head;

    while (temp != NULL) {
        newHead = insertAtEnd(newHead, temp->data);
        temp = temp->next;
    }

    return newHead;
}

// Function to print a linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    struct Node* originalList = NULL;
    struct Node* copiedList = NULL;
    int number;

    printf("Enter numbers to add to the linked list (enter -1 to stop):\n");
    while (1) {
        printf("Enter number: ");
        scanf("%d", &number);
        if (number == -1) {
            break;
        }
        originalList = insertAtEnd(originalList, number);
    }

    printf("\nOriginal List:\n");
    printList(originalList);

    copiedList = copyList(originalList);

    printf("\nCopied List:\n");
    printList(copiedList);

    return 0;
}
