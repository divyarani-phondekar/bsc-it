#include<stdio.h>

int main()
{
		printf("559_Dayasagar_SYIT \n");
  int n, array[1000], i, j, temp;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]); 

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
   

  printf("Sorted list in ascending order\n");
  printf("By insertion sort:\n");
  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", array[i]);
  }

  return 0;
}
