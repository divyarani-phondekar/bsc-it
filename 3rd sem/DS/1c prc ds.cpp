#include<stdio.h>
void create1();
void create2();
void add();
void multi();
void transpose();
int a[10][10],b[10][10],c[10][10],t[10][10],t1,t2,r1,r2,c1,c2,k,i,j;


int main() {
	int ch;
	printf("559_Dayasagar phondekar");
	do {
		printf("\n1.Create a first array\n2.Create a second array\n3.Addition\n4.Multification\n5.Transpose\n6.Exit");
		printf("\nChoose number from 1 to 6 :");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				create1();
				break;
			case 2:
				create2();
				break;
			case 3:
				add();
				break;
			case 4:
				multi();
				break;
			case 5:
				transpose();
				break;
			case 6:
				break;
		}
	} while(ch!=6);
	return 0;
}

void create1() {
	printf("\nEnter the number of rows for matrix:");
	scanf("%d",&r1);
	printf("Enter the number of column for matrix:");
	scanf("%d",&c1);
	for(i=0; i<r1; i++) {
		for(j=0; j<c1; j++) {
			printf("Enter the values of %d%d:",i,j);
			scanf("%d",&a[i][j]);

		}
	}
	printf("\nFirst matrix is:\n");

	for(i=0; i<r1; i++) {
		for(j=0; j<c1; j++) {
			printf("%d\t",a[i][j]);

		}
		printf("\n");
	}
}


void create2() {
	printf("Enter the number of rows for matrix:");
	scanf("%d",&r2);
	printf("Enter the number of column for matrix:");
	scanf("%d",&c2);
	for(i=0; i<r2; i++) {
		for(j=0; j<c2; j++) {
			printf("Enter the values of %d%d:",i,j);
			scanf("%d",&b[i][j]);

		}
	}
	printf("\nSecond matrix is:\n");

	for(i=0; i<r2; i++) {
		for(j=0; j<c2; j++) {
			printf("%d \t",b[i][j]);

		}
		printf("\n");
	}
}

void add() {
	for(i=0; i<r1; i++) {
		for(j=0; j<c1; j++) {
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n\nAddition of array is:\n");

	for(i=0; i<r2; i++) {
		for(j=0; j<c2; j++) {
			printf("%d \t",c[i][j]);

		}
		printf("\n");
	}
}
void multi() {
	if(c1==r2) {
		for(i=0; i<r1; i++) {
			for(j=0; j<c2; j++) {
				c[i][j]=0;
				for(k=0; k<c1; k++) {
					c[i][j]+=a[i][k]*b[k][j];

				}
			}
		}
		for(i=0; i<r1; i++) {
			for(j=0; j<c2; j++) {
				printf("%d \t",c[i][j]);
			}
			printf("\n");
		}
	} else {
		printf("\n\nMultiplication not possible");
	}
}
void transpose() {
	for(i=0; i<c1; i++) {
		for(j=0; j<r1; j++) {
			t[i][j]=a[j][i];
		}
	}
	printf("\n Transpose of first matrix is :\n");

	for(i=0; i<c1; i++) {
		for(j=0; j<r1; j++) {
			printf("%d \t",t[i][j]);
		}
		printf("\n");

	}
}
