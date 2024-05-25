#include<stdio.h>
int main(){
	int i,n,index,a[10],val;
	printf("\n Enter no of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter no of index: ");
		scanf("%d",&a[i]);
	}
	printf("\n Enter no element of array ");
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
}