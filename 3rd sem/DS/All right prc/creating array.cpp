#include<stdio.h>
int main(){
	int i,n,a[10];
	printf("\n Enter no of element: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\n Enter no of index: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n Enter no element of array ",i);
	for(i=0;i<n;i++)
	{
		printf("\t %d",a[i]);
	}
}