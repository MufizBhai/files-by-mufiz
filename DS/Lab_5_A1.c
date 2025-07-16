#include<Stdio.h>
void main()
{
	int i,j;
	int a[2][2],b[2][2],c[2][2];

	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Elements A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter Elements B[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
			
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\nAddition\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("C = %d \n",c[i][j]);
		}
	}
}
