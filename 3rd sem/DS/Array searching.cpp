#include<stdio.h>
int main()
{
	int a[20],n,i,ele;
	
	printf("Enter no of elements : \n");
	scanf("%d",&n); 
	
	for(i=0;i<n;i++)
	{
		printf("Enter element at index %d : ",i);
		scanf("%d",&a[i]); 
	}
	
	printf("Enter the element you are searching : \n");
	scanf("%d",&ele); 
	
		
	for(i=0;i<n;i++)  
	{
		if(ele==a[i]) 
		break;
	}
	
	if(i==n)
	{
		printf("\n Element was not found ");
	}
	else
	{
		printf("\n Element was found at index %d",i);
	}
	
	
	return 0;
}