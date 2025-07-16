#include<stdio.h>
struct node
{
	int info;
	struct node *link;
};

struct node* insert_at_Ending(struct node *head, int info)
{
	struct node *New = (struct node*)  malloc (sizeof(struct node));
	struct node *ptr = (struct node*)  malloc (sizeof(struct node));
	New->info = info;
	New->link = NULL;
	if(head!=NULL)
	{
		ptr = head;
		while(ptr->link != NULL)
		{
			ptr = ptr->link;
		}
		ptr->link = New;
	}
	else
	{
		head = New;	
	}
	return head; 
}

void add()
{
				printf("Enter How many Number You want to Add in LinkedList At Ending: ");
				scanf("%d",&n);
				
				for(i=0;i<n;i++)
				{
					printf("Enter %d Element:",i+1);
					scanf("%d",&j);
					head = insert_at_Ending(head,j);	
				}
}

void printing()
{
	struct node *temp  = head;
				while(temp!=NULL)
				{
					printf("%d->",temp->info);
					temp = temp->link;
				} 
				printf("NULL");
}

void main()
{
	struct node *head = NULL;
	int i,n,j;
	
	printf("Press 1 for Enter Elements in last\n");
	printf("Press 2 for Display value\n");
	printf("Press 3 for Exit\n");
	printf("Press 1 or 2 or 3 : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1 : 
				void add();
				break;
		
		case 2 : 
				void printing()
				break;
				
		case 3 :
					printf("\n");
					printf("You are Exit Good Bye\n");
					printf("\n");
					break;
		
	}
}
