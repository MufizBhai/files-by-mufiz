#include<stdio.h>
#include<stdlib.h>

struct node { ////node structure
	int info;
	struct node *link;
};
struct node *first = NULL;

void insertAtFirst(int x) //insert at first
{
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->info = x;
	newNode->link = first;
	first = newNode;
}
void insertAtLast(int x) //////insert at last
{
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	struct node *save = first;
	newNode->info=x;
	newNode->link=NULL;
	
	if(first==NULL) {
		first = newNode;
	}
	else {
		while(save->link !=NULL) {
			save = save->link;
		}
		save->link=newNode;
	}
}
void deleteAtFirst() {
	if(first==NULL) {
		return;
	}
	else {
		struct node *save = first;
		first = first->link;
		free(save);
	}
}
void deleteAtLast()
{
    struct node *save = first;
    struct node *pred = first;

    while(save!=NULL)
    {
        pred = save;
        save = save -> link;
    }
    free(save);
    pred -> link = NULL;
}

void deleteAtOrd (int x)
{
    if(first == NULL) {
        printf("list underflow");
    }

    else 
    {
        struct node *save=first;
        struct node *predeccor=first;

    	if(first->info == x) {
        	struct node *temp = first;
        	first = first->link;
        	free(temp);
        	printf("Node with value %d deleted\n", x);
        	return;
    	}

        while(save != NULL && save -> info != x) {
            predeccor = save;
            save = save -> link;
        }

        if(save == NULL) {
            printf("not found");
        }
        else {
            predeccor -> link = save->link; 
            free(save);
            printf("Node with value %d deleted\n", x);
        }
    }
}
void display() { //// to display list
	struct node *save = first;
	while(save != NULL) {
		printf("%d->",save->info);
		save=save->link;
	}
	printf("NULL\n");
}
void main() /////main method
{
	int choice;
	while(1) {
		printf("enter 1 to add node at first\n");
		printf("enter 2 to display all nodes\n");
		printf("enter 3 to delete node at first\n");
		printf("enter 4 to insert node at last\n");
		printf("enter 5 to delete node at last\n");
		printf("enter 6 to delete node at specific point\n");
		printf("enter 7 to exit\n");
		printf("\n");
		printf("enter your choice : ");
		scanf("%d",&choice);
		
		if(choice==1) {
			printf("\n");
			int n;
			printf("Enter n to add node at first :");
			scanf("%d",&n);
			insertAtFirst(n);
		}
		else if(choice==2) {
			printf("\n");
			display();
		}
		else if(choice==3) {
			printf("\n");
			deleteAtFirst();
			display();
		}
		else if(choice==4) {
			printf("\n");
			int n;
			printf("Enter n to insert node at last :");
			scanf("%d",&n);
			insertAtLast(n);
		}
		else if(choice==5) {
			printf("\n");
			deleteAtLast();
			display();
		}
		else if(choice==6) {
			printf("\n");
			int n;
			printf("Enter specific position to delete node:");
			scanf("%d",&n);
			deleteAtOrd(n);
			display();
		}
		else if(choice==7) {
			break;
		}
	}
}
