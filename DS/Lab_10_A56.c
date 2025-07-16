#include<stdio.h>
struct node
{
	int info;
	struct node* link;
};
void main()
{
	struct node* newNode = (struct node*) malloc (sizeof(struct node));
	printf("Enter Node->Info:");
	scanf("%d",&(newNode->info));
	printf("Enter Node->link:NULL");
	newNode->link=NULL;
	printf("\nInfo:%d\nLink:%d\n",newNode->info,newNode->link);
}
