#include<stdio.h>
#include<conio.h>
void create1();
void create2();
void merge();
void sort();
int ch,a[5],b[5],c[5],i,j,n1,n2,n3,n,k,temp;
int main() {
	printf("559_SYIT_Dayasagar phondekar");
	do {
		printf("\n1.Create1\n2.Create2 \n3.Merge\n4.Sort");
		printf("\n Choose from 1-4:");
		scanf("%d",&ch);

		switch(ch) {
			case 1:
				create1();
				break;
			case 2:
				create2();
				break;
			case 3:
				merge();
				break;
			case 4:
				sort();
				break;
			case 5:
				break;
		}
	} while(ch!=5);
	return 0;
}

void create1() {
	printf("\nEnter number of elements for A: ");
	scanf("%d",&n1);
	for(i=0; i<n1; i++) {
		printf("\nEnter elements for index %d: ",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
}

void create2() {
	printf("\nEnter number of elements for B: ");
	scanf("%d",&n2);
	for(i=0; i<n2; i++) {
		printf("\nEnter elements for index %d: ",i);
		scanf("%d",&b[i]);
	}
}

void merge() {
	n3 = n1 + n2;
	for(i = 0; i < n1; i++)
		c[i] = a[i];
	for(i = 0; i < n2; i++)
		c[i + n1] = b[i];

	printf("The merged array: ");
	for(i = 0; i < n3; i++)
		printf("%d ", c[i]);
}

void sort() {
	printf("\nFinal array after sorting: ");
	for(i = 0; i < n3; i++) {
		int temp;
		for(j = i + 1; j < n3; j++) {
			if(c[i] > c[j]) {
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	for(i = 0; i < n3 ; i++)       //Print the sorted Array
		printf(" %d ",c[i]);

}
