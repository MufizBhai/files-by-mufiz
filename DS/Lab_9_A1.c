#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a = (int *)malloc(sizeof(int));
	char *b = (char *)malloc(sizeof(char));
	float *c = (float *)malloc(sizeof(float));
	
	printf("Enter Integer : ");
	scanf("%d",&*a);
	
	fflush(stdin);
	
	printf("\nEnter char : ");
	scanf("%c",&*b);
	
	printf("\nEnter Float : ");
	scanf("%f",&*c);
	
	printf("\nInteger : %d & Address = %d ",*a,&a);
	printf("\nChar : %c & Address = %d ",*b,&b);
	printf("\nFloat : %f & Address = %d " ,*c,&c);
	
	free(a);
	free(b);
	free(c);
}
