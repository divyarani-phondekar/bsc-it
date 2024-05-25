#include<stdio.h>
int main()
{
	int r,c,n,i,j,a[10][10],b[10][10];
	
	printf("Enter no of row: \n");
	scanf("%d",&r);
	
	printf("Enter no of col: \n");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter value for A %d %d \n",i,j);
			scanf("%d",&a[i][j]); 
		}
		
	}
	printf("The array A is: \n");
		
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",a[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}
































