#include<stdio.h>
void main()
{
	int po,i,n;
	
	printf("Enter size : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter Elements arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the index which you want to delete : ");
	scanf("%d",&po);
	
	if(po>=n+1)
	{
		printf("Not possible : \n");	
	}
	else
	{
		for(i=po;i<n-1;i++)
		{
			arr[i] = arr[i+1];
		}
		for(i=0;i<n-1;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
}
