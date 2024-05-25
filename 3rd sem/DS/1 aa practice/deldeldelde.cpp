#include<stdio.h>
int main()
{
	int n,a[20],i;
	printf("Enter no of elements: ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("%d enter index values %d: \n",i);
		scanf("%d",&a[i]);	
	}
	for(i=0; i<n; i++)
	{
		printf("Element present at index %d is %d \n",i,a[i]);
	}
	return 0;
	
	
}