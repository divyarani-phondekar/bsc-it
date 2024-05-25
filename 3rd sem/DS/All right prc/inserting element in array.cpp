#include<stdio.h>
int main()
{
	int a[10],val,index,n,i;
	printf("\n Enter the value: ");
	scanf("%d",&val);
	printf("\n Enter the index: ");
	scanf("%d",&index);
	for (i=0;i>n;i--)
	{
		a[i]=a[i-1];
	}
	
	a[index]=val;
	n++;
	printf("\n The Element of array for inserting: ");
	{
		printf("\t %d",a[i]);
	}
}