#include<stdio.h>
int main()
{
	int a[10][10],i,j,r1,c1;
	printf("Enter no of rows :");
	scanf("%d",&r1);
	printf("Enter no of column :");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter value for index %d%d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The element in array :\n\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\t %d",a[i][j]);
		}
		
	}
	return 0;	
}
