#include<stdio.h>
void main()
{
	int n,i,insert,index,temp;
	printf("Enter size of array : ");
	scanf("%d",&n);

	int arr[n+1];
	
	for(i=0;i<n;i++)
	{
		printf("Enter array elements arr[%d] : ",i);
		scanf("%d",&arr[i]);
	}
	printf("Enter number to insert : ");
	scanf("%d",&insert);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>insert)
		{
			temp=i;
			break;
		}
	}
	for(i=n;i>=0;i--)
	{
		if(arr[i]==temp)
		{
			arr[i+1]=insert;
			break;
		}
		arr[i]=arr[i-1];
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
