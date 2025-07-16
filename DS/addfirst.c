#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *head = NULL;

void insert_at_first(int info)
{
	struct node *New = (struct node*)  malloc (sizeof(struct node));
	New->info=info;
	New->link = head;	
	head = New;
	return;
}

void display()
{
	struct node* temp  = head;
	while(temp!=NULL)
	{
		printf("%d->",temp->info);
		temp = temp->link;
	} 
	printf("NULL\n");
	printf("\n");
}

void main()
{
	
	int i,n,j,choice;
	
	while(1)
	{
		printf("Press 1 for Enter Elements in first\n");
		printf("Press 2 for Display value\n");
		printf("Press 3 for Exit\n");
		printf("Press 1 or 2 or 3 : ");
		scanf("%d",&choice);
	
		switch(choice)
		{
			case 1 :
					printf("\n");
					printf("Enter How many Number You want to Add Starting in LinkedList: ");
					scanf("%d",&n);
					printf("\n");
					for(i=0;i<n;i++)
					{
						printf("Enter %d Element:",i+1);
						scanf("%d",&j);
						insert_at_first(j);	
					}
					printf("\n");
					break;
					
			case 2 :  
					printf("\n");
					display();
					printf("\n");				
					break;
					
			case 3 :  
					
					printf("\n");
					printf("You are Exit Good Bye\n");
					printf("\n");
					break;
					
			}
		}
}
