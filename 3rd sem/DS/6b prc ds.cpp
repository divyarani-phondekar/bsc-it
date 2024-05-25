#include<stdio.h>
int main()
{
	printf("559_Dayasagar_SYIT_B \n");
	int a[10],i,n,val;
	
	printf("Enter number of elements: \n");
	scanf("%d",&n);
	
	printf("Enter %d numbers: \n",n);
	
	for(i=0;i<n;i++)
	{
	 scanf("%d",&a[i]);
	}	
	
	printf("Enter the value to be searched \n");
	scanf("%d",&val);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			printf("%d was found at %d index",val,i);
			break;
		}
	}
	
	if(i==n)
	{
		printf("%d was not found",val);
	}
	
	
	return 0;
}
