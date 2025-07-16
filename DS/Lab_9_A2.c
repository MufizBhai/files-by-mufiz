#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i;
	printf("Enter Size of n : ");
	scanf("%d",&n);
	
	int *arr = (int *)malloc(sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter Array arr[%d] : ",i);
		scanf("%d",arr+i);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",*(arr+i));
	}
		
}
