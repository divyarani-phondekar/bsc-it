#include <stdio.h>

int main()
{
  int array[100],n,i,j,swap;
   	printf("\n561-B-SHWETA PIMPALE");
  printf("\nEnter number of elements:");
  scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the element for index %d:",i);
		scanf("%d",&array[i]);
	}
  for (i=0;i<n-1;i++)
  {
    for (j=0;j<n-i-1;j++)
    {
      if (array[j]>array[j+1]) /* For decreasing order use < */
      {
        swap=array[j];
        array[j]=array[j+1];
        array[j+1]=swap;
      }
    }
  }

  printf("\nSorted list in ascending order:\n");

  for (i=0;i<n;i++)
     printf("%d\t", array[i]);

  return 0;
}
