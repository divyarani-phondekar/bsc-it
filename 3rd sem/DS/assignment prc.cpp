#include<stdio.h>
void create();
void print();
void insert();
void delet();
void copy();
void merg();
void split();
void sort();
void search();
void reverse();
void name();
int i,j,n,n1;
int a[10],b[20],c[20];
int main(){
	int ch;
	name(); 
	do {
		printf("\n\n 1. Create Array\n"); 
		printf("2. Print array\n");
		printf("3. Insert value in array\n");
		printf("4. Deleting an array\n");
		printf("5. Copying array\n");
		printf("6. Merging array\n");
		printf("7. split of array\n");
		printf("8. sorting of array\n");
		printf("9. searching value in array\n");
		printf("10. Reversing array\n");
		printf("11. Exit\n");
		printf("\n Select your choice: \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				print();
				break;
			case 3:
				insert();
				break;
			case 4:
				delet();
				break;
			case 5:
				copy();
				break;
			case 6:
				merg();
				break;
			case 7:
				split();
				break;
			case 8:
				sort();
				break;
			case 9:
				search();
				break;
			case 10:
				reverse();
				break;
			case 11:
				break;
			default:
				printf("Invalid Input");
		}		
	}while (ch!=11);
	return 0;
	
}
void name(){
	printf("--<>--MADE BY:-DAYASAGAR PHONDEKAR 559--<>--\n\t");
}
void create() {
	name();
	printf("Creation of array A\n");
	printf("Enter number of elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("Enter element for index %d ",i);
		scanf("%d",&a[i]);
	}
}
void print() {
	name();
	printf("Elements of array A\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}
void insert() {
	name();
	printf("Inserting  elements in array A\n");
	int val,ind;
	printf("Enter value :  ");
	scanf("%d",&val);
	printf("Enter index : ");
	scanf("%d",&ind);
	for(i=n; i>ind; i--) {
		a[i]=a[i-1];

	}
	a[ind]=val;
	n++;
	printf("The element of array A after inserting\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}
void delet() {
	name();
	printf("Deleting element from array A\n");
	int ind;
	printf("Enter index :\n");
	scanf("%d",&ind);
	for(i=ind; i<n; i++) {
		a[i]=a[i+1];
	}
	n--;
	printf("Elements after deleting value from array A\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}
void copy() {
	name();
	printf("Copying operation \n");
	for(i=0; i<n; i++) {
		b[i]=a[i];
	}
	printf("Value of array a is copy in array b\n");

	for(i=0; i<n; i++) {
		printf("%d \t",b[i]);
	}
}
void merg() {
	int k;
	name();
	printf("Merging operation \n");
	printf("Elements of array A\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
	printf("\nEnter number of elements for B array \n");
	scanf("%d",&n1);
	for(i=0; i<n1; i++) {
		printf("Enter element for index %d ",i);
		scanf("%d",&b[i]);
	}
	for(i=0; i<n; i++) {
		c[i]=a[i];
	}
	k=n;
	for(i=0; i<n1; i++) {
		c[k]=b[i];
		k++;
	}

	printf("Elements after merging array A&B \n");
	for(i=0; i<k; i++) {
		printf("%d \t",c[i]);
	}
}
void split() {
	int ind,k;
	name();
	printf("Spliting operation \n");
	printf("Enter index : ");
	scanf("%d",&ind);

	for(i=0; i<ind; i++) {
		a[i]=c[i];
	}
	k=0;
	for(i=ind; i<n; i++) {
		b[k]=c[i];
		k++;
	}
	printf("values after splitting Array  \n");
	printf("values of array A after splitting\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
	printf("\n Elements of array B after splitting \n");
	for(i=0; i<n1; i++) {
		printf("%d \t",b[i]);

	}

}
void sort() {
	name();
	printf("Sorting operation in array A\n");
	int temp;
	for(i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Elements after sorting array A\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}
void search() {
	name();
	printf("Searching operation in array A\n");
	int val;
	printf("Enter the element you are searching : ");
	scanf("%d",&val);


	for(i=0; i<n; i++) {
		if(val==a[i])
			break;
	}

	if(i==n) {
		printf("\n Element was not found ");
	} else {
		printf("\n Element was found at index %d",i);
	}

}
void reverse() {
	name();
	int temp;
	printf("Reversing operation\n");
	for(i=0; i<n/2; i++) {
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;

	}
	printf("Elements of array A after reversing the element :\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}
