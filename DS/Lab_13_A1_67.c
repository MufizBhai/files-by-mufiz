#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *first = NULL;

void insert_at_first(int x)
{
	struct node *newNode = (struct node*)  malloc (sizeof(struct node));
	newNode->info=x;
	newNode->link = first;	
	first = newNode;
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

void insertgcd()
{
	struct node *curr=first;
	struct node *next=curr->link;

	while(next!=NULL)
	{
		struct node *newNode = (struct node *)malloc(sizeof(struct node));
		newNode -> info = gcd(curr->info,next->info);
		curr->link=newNode;
		newNode->link=next;
		curr=newNode->link;
		next=next->link;
	}
}

int gcd(int a,int b)
{
	int min,gcd,i;
	if(a>b)
	{
		min=b;
	}
	else
	{
		min=a;
	}
	
	for(i=min;i>=1;i--)
	{
		if(a%i==0 && b%i==0)
		{
			gcd=i;
			break;
		}
	}
	return gcd;
}

void main()
{
	insert_at_first(3);
	insert_at_first(10);
	insert_at_first(6);
	insert_at_first(18);
	display();
	insertgcd();
	display();
}
