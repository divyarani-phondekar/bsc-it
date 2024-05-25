#include<stdio.h>
int main()
{
	int s[10],a[5],b[5],n,i,k,index;
	printf("Enter the no of element");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter value for index",i);
		scanf("%d",&s[i]);
	}
	printf("\n Element in array %d: ");
	for(i=0;i<n;i++);
	{
		printf("\t %d",s[i]);
	}
	printf("Enter the index no to split: ");
	scanf("%d",&index);
	
	for(i=0;i<index;i++)
	{
		a[i]=s[i];
	}
	k=0;
	for(i=index;i<n;i++);
	{
		b[k]=s[i];
		k++;
	}
	printf("\n\n The element in array A: ");
	for(i=0;i<index;i++)
	{
		printf("\t %d",a[i]);	
	}
	printf("\n\n The element in array B: ");
	for(i=0;i=n-index;i++);
	{
		printf("\t %d",b[i]);
	}
	return 0;	
}