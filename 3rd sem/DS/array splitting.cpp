#include<stdio.h>
int main()
{
	int M[10],N[10],Z[20],n,n1,n2,i,index,j=0;
	
	printf("Enter no of elements for array Z : \n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter element for index %d :",i);
		scanf("%d",&Z[i]);
	}
	
	printf("\n Array Z : \n");
	for(i=0;i<n;i++)
	{
		printf("Element present at index %d is %d \n",i,Z[i]);
	}
	
	printf("Enter the index for splitting : \n");
	scanf("%d",&index);
	
	for(i=0;i<index;i++)
	{
		M[i]=Z[i];
	}
	
	for(i=index;i<n;i++)
	{
		N[j]=Z[i];
		j++;
	}
	
	n=(n-index);   
	 
	printf("\n Array M after splitting : \n");
	for(i=0;i<index;i++)
	{
		printf("Element present at index %d is %d \n",i,M[i]);
	}
	
	printf("\n Array N after splitting : \n");
	for(i=0;i<n;i++)
	{
		printf("Element present at index %d is %d \n",i,N[i]);
	}
	return 0;
}