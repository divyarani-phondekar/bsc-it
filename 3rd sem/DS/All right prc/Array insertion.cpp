#include<stdio.h>
int main() {
	int a[10],n,i,index,num;
	
	printf("Enter no.of elements : \n");
	scanf("%d",&n);

	//n=4

	for(i=0; i<n; i++) {
		printf("Enter value for index %d : \n",i);
		scanf("%d",&a[i]);
	}

	printf("The array before inserting is : \n");
	for(i=0; i<n; i++) {
		printf("Element at index %d is %d \n",i,a[i]);
	}

	//inserting into an array
	printf("\n Enter the index to insert the value: \n");
	scanf("%d",&index);
	printf("Enter the value to be inserted : \n");
	scanf("%d",&num);

	for(i=n; i>index; i--) {
		a[i]=a[i-1];
	}
	a[index]=num;
	n++;

	printf("The array after inserting is : \n");
	for(i=0; i<n; i++) {
		printf("Element at index %d is %d \n",i,a[i]);
	}

	return 0;
}