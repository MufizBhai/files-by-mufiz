#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *first = NULL;

void insert_at_first(int info)
{
	struct node *New = (struct node*)  malloc (sizeof(struct node));
	New->info=info;
	New->link = first;	
	first = New;
	return;
}


void insert_at_Ending(int info)
{
	struct node *New = (struct node*)  malloc (sizeof(struct node));	
	New->info = info;
	New->link = NULL;
	
	if(first!=NULL)
	{
		struct node * ptr = first;
		while(ptr->link != NULL)
		{
			ptr = ptr->link;
		}
		ptr->link = New;
	}
	else
	{
		first = New;	
	}
	return; 
}

void display()
{
	struct node* temp  = first;
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
		printf("Press 2 for Enter Elements in Last\n");
		printf("Press 3 for Display value\n");
		printf("Press 4 for Exit\n");
		
		printf("Press 1 or 2 or 3 or 4 : ");
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
					printf("Enter How many Number You want to Add Ending in LinkedList: ");
					scanf("%d",&n);
					printf("\n");
					for(i=0;i<n;i++)
					{
						printf("Enter %d Element:",i+1);
						scanf("%d",&j);
						insert_at_Ending(j);	
					}
					printf("\n");
					break;
							
			case 3 :  
					printf("\n");
					display();
					printf("\n");				
					break;
					
			case 4 :  
					
					printf("\n");
					printf("You are Exit Good Bye\n");
					printf("\n");
					return;		
			}
		}
}
