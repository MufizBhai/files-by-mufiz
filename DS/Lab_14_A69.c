#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};
    struct node *newNode;
    struct node *first;

void insertAtCirFirst(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = x;

    if (first == NULL) {
        
        newnode->link = newnode;
        first = newnode;
    } else {
        newnode->link = first->link;  
        first->link = newnode;        
    }
}

void insertAtCirLast(int x) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->info = x;

    if (first == NULL) {
        
        newnode->link = newnode;
        first = newnode;
    } else {
        newnode->link = first->link; 
        first->link = newnode;        
        first = newnode;              
    }
}

void deleteAtCirLast(int p) {
	int i;
    if (!first) {
        printf("List is empty.\n");
        return;
    }

    struct node *save = first->link; 
    struct node *prev = first;

    if (first == first->link && p == 1) {
        free(first);
        first = NULL;
        printf("Deleted only node.\n");
        return;
    }

    if (p == 1) {
        first->link = save->link;
        free(save);
        printf("First node deleted.\n");
        return;
    }

    for (i = 1; i < p && save != first; i++) {
        prev = save;
        save = save->link;
    }

    if (save == first && p != 1) {
        printf("Invalid.\n");
        return;
    }

    if (save == first) 
    first = prev;  
    prev->link = save->link;
    free(save);
    printf("Node at position %d deleted.\n", p);
}

void display(){
    if(first==NULL){
        printf("empty....");
        return;
    }
   struct node *save = first->link;
   printf("Circular Linked List: ");
   
   while(save!=first){
    printf("%d,",save->info);
    save=save->link;
   }
   printf("%d,\n",first->info);

}

void main() {
    int choice, n, p, i;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Insert at First\n");
        printf("2. Insert at End\n");
        printf("3. Delete at Position\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value at first: ");
                scanf("%d", &n);
                insertAtCirFirst(n);
                break;
            case 2:
                printf("Enter value at end: ");
                scanf("%d", &n);
                insertAtCirLast(n);
                break;
            case 3:
                printf("Enter position to delete: ");
                scanf("%d", &p);
                deleteAtCirLast(p);   
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }
}
