#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
};

struct node *first = NULL;
struct node *first2 = NULL;

void insert_at_first(int info)
{
	struct node *New = (struct node*)  malloc (sizeof(struct node));
	New->info=info;
	New->link = first;	
	first = New;
	return;
}

void copy()
{
	
}

void main()
{
	insert_at_first(10);
	insert_at_first(20);
	insert_at_first(30);

}
	
