#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,sum=0;
	printf("Enter Size : ");
	scanf("%d",&n);
	
	int *arr = (int *)malloc(sizeof(int));
	
	for(i=0;i<n;i++)
	{
		printf("Enter Array arr[%d] : ",i);
		scanf("%d",arr+i);
		sum+=*(arr+i);
	}
	
	printf("Sum = %d ",sum);
		
}
