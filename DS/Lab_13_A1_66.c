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

void sort()
{
	struct node *curr = first;
	struct node *i ,*j;
	
	for(i=curr;i->link;i=i->link)
	{
		for(j=curr->link;j!=NULL;j=j->link)
		{
			
		}
	}
}

void main()
{
	
}

