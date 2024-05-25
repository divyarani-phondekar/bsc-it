#include<stdio.h>
void create();
void print();
void insert();
void search();
void del();
void copy();
void merg();
void split();
void sort();
void reverse();
void intro();
void intro1();
int i,j,n,n1;
int a[10],b[10],c[20];

int main() {
	int ch;
	intro();
	do {
		printf("\n\n1. Create array\n");
		printf("2. Print array \n");
		printf("3. Insert value in array \n");
		printf("4. Reversing Array\n");
		printf("5. Merging of array\n");
		printf("6. Delete value from array\n");
		printf("7. Copying Array\n");
		printf("8. Search value in array\n");
		printf("9. Sorting of array\n");
		printf("10. Spliting of array\n");
		printf("11. EXit\n");
		printf("\n Select Your Choice : ");
		scanf("%d",&ch);
		switch(ch) {
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
				reverse();
				break;
			case 5:
				merg();
				break;
			case 6:
				del();
				break;
			case 7:
				copy();
				break;
			case 8:
				search();
				break;
			case 9:
				sort();
				break;
			case 10:
				split();
				break;
			case 11:
				break;
			default :
				printf("Invalid input");
		}
	} while(ch!=11);
	return 0;
}
void intro1() {
	printf("\n\n--------------------\nMADE BY : 569_Prathamesh Raut\n--------------------\n\n");
}
void intro() {
	printf("-----------------------------\n");
	printf("-----------------------------");
	printf("\n\tMENU ");
	printf("\n\tDRIVEN ");
	printf("\n\tPROGRAMM\n");
	printf("-----------------------------\n");
	printf("-----------------------------");
	printf("\n\n--------------------\nMADE BY : 569_Prathamesh Raut\n--------------------\n\n");
}
void create() {
	intro1();
	printf("Creation of array A\n");
	printf("Enter number of elements : ");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("Enter element for index %d: ",i);
		scanf("%d",&a[i]);
	}
}
void print() {
	intro1();
	printf("Elements of array A\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}
void insert() {
	intro1();
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

void del() {
	intro1();
	printf("Deleting element from array A\n");
	int ind;
	printf("Enter index :\n");
	scanf("%d",&ind);
	for(i=ind; i<n; i++) {
		a[i]=a[i+1];
	}
	n--;
	printf("Elements after deleting value form array A\n");
	for(i=0; i<n; i++) {
		printf("%d \t",a[i]);
	}
}

void merg() {
	intro1();
	int k;
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
	intro1();
	int ind,k;
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
void copy() {
	intro1();
	printf("Copying operation \n");
	for(i=0; i<n; i++) {
		b[i]=a[i];
	}
	printf("Value of array a is copy in array b\n");

	for(i=0; i<n; i++) {
		printf("%d \t",b[i]);
	}
}

void search() {
	intro1();
	printf("searching operation in array A\n");
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

void sort() {
	intro1();
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
void reverse() {
	intro1();
	int temp;
	printf("Reversing operation\n");
	for(i=0; i<n/2; i++) {
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;

	}
	printf("Elements of array A after reversing the element :\n");
	for(i=0; i<n; i++) {
		printf("%d\t",a[i]);
	}
}