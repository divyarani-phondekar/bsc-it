#include<stdio.h>
int main()
{
	int x[10],i,n;
	
	printf("Enter number of elements : \n");
	scanf("%d",&n);
	//Accepting values of an array
	
	for(i=0;i<n;i++)  //i=3
	{
		printf("Enter value for index %d : \n",i); //
		scanf("%d",&x[i]); //x[0]=10  x[1]=20 x[2]=30
	}
	
     //Printing values of array
     
	for(i=0;i<n;i++)
	{
		printf("Element present at index %d is %d \n",i,x[i]);
	}
	
	return 0;
}