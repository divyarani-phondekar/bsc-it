#include<stdio.h>

int main()
{
  int n, array[100], i, j, temp;
	printf("\n561-B-SHWETA PIMPALE");
 printf("\nEnter number of elements:");
  scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element for index %d:",i);
		scanf("%d",&array[i]);
	} 

  for(i=1;i<n;i++) 
  {
      temp=array[i]; 
      j=i-1;
      while((temp<array[j]) && (j>=0))  
	  {
         array[j+1]=array[j];
         j--;
      }
      array[j+1]=temp;
   }
   

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\t", array[i]);
  }

  return 0;
}

