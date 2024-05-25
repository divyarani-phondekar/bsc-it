#include<stdio.h>
int main()
{
	int c[10],i,n3,a[5],b[5],k,index;
	printf("Enter no of elements :");
	scanf("%d",&n3);
	for(i=0;i<n3;i++)
	{
		printf("\nEnter value for index %d :",i);
		scanf("%d",&c[i]);
	}
	printf(" \nElement in array :");
	for(i=0;i<n3;i++)
	{
		printf("\t %d",c[i]);
	}
	printf("\nEnter the index to split the array :");
	scanf("%d",&index);

	for(i=0;i<index;i++)
	{
		a[i]=c[i];
	}
	k=0;
	for(i=index;i<n3;i++)
	{
		b[k]=c[i];
		k++;
	}
	printf("\n\nThe elements in array A");
	for(i=0;i<index;i++)
	{
		printf("\t %d",a[i]);
	}
		printf("\n\nThe elements in array B");
	for(i=0;i<n3-index;i++)
	{
		printf("\t %d",b[i]);
	}
	
	return 0;
}
