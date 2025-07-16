#include<stdio.h>
#include<stdlib.h>
struct node {
	int info;
	struct node *link;
};
struct node *first = NULL;

void insertAtFirst(int x)
{
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	newNode->info = x;
	newNode->link = first;
	first = newNode;
}
void insertAtLast(int x)
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

void display() {
	struct node *save = first;
	while(save != NULL) {
		printf("%d->",save->info);
		save=save->link;
	}
	printf("NULL\n");
}
void main()
{
	struct node *newNode = (struct node *)malloc(sizeof(struct node));
	
	int n;
	insertAtFirst(10);
	insertAtFirst(20);
	insertAtFirst(30);
	display();
}
