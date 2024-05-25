#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("Enter No of rows: ");
	scanf("%d",&r);
	printf("Enter No of column: ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter value for index ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The element in array :\n\n");
	for(i=0;i<r;i++)
	{
		for(i=0;i<c;i++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\n\n");
	}
	return 0;	
}