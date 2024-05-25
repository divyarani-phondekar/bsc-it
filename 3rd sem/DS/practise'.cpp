#include<stdio.h>
int main()
{
	int d[10],a[5],b[5],n,i,index,k;
	printf("Enter the no of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter value for index: ",i);
		scanf("%d",&d[i]);
	}
	printf("\n Element in array " );

	for(i=0;i<n;i++)
	{
		printf("\t %d", d[i]);
	}
	printf("\n Enter the element to split the array: ");
	scanf("%d",&index);
	for (i=0;i<index;i++)
	{
		a[i]=d[i];
	}
	k=0;
	for(i=index;i<n;i++)
	{
		b[k]=d[i];
		k++;
	}
	printf("\n\n The element in array A: ");
	for(i=0;i<index;i++)
	{
		printf("\t %d", a[i]);
	}
	printf("\n\n The elment in array B: ");
	for(i=0;i<n-index;i++)
	{
		printf("\t %d",b[i]);
	}
	return 0;
}