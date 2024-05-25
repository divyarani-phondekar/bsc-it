#include<stdio.h>
#include<conio.h>
void creating();
void reversing();
void sorting();
void searching();
int a[20],b[20],c[20],n,n1,n2,i,j,k,val,ind,temp,pos,k1,k2;
int main() {
	int ch;
	do {
		printf("\n 1.) Create \n 2.) Reverse \n 3.) Sort \n 4.) Search ");
		printf("\n Select an option between 1-4 : ");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				creating();
				break;
			case 2:
				reversing();
				break;
			case 3:
				sorting();
				break;
			case 4:
				searching();
				break;
		}
	} while(ch!=4);
	return 0;
}
void creating() {
	printf("\n 559_Dayasagar_phondekar_SYIT_B ");
	printf("\n");
	printf("\n Enter number of elements :");
	scanf("%d",&n);
	for(i=0; i<n; i++) {
		printf("\n Enter element for index %d :");
		scanf("%d",&a[i]);
}
void reversing() {
	printf("\n 559_Dayasagar_phondekar_SYIT_B ");
	printf("\n");
	
	printf("\n Entered elements of array are :");
	for(i=0; i<n; i++) {
		printf("\t %d",a[i]);
	}printf("\n Reversed array is :");
	for(i=n-1; i>=0; i--) {
		printf("\t %d",a[i]);
	}
}
void sorting() {
	printf("\n 559_Dayasagar_phondekar_SYIT_B ");
	printf("\n");
	printf("\n Entered elements of array are :");
	for(i=0; i<n; i++) {
		printf("\t %d",a[i]);
	}
	for (i=0; i<n; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i]>a[j]) {
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n After sorting array is :");
	for(i=0; i<n; i++) {
		printf("\t%d",a[i]);
	}
}
void searching() {
	printf("\n 559_Dayasagar_phondekar_SYIT_B ");
	printf("\n");
	printf("\n Enter the value to search the element in the array :");
	scanf("%d",&val);
	for(i=0; i<n; i++) {
		if(val==a[i]) {
			printf("\n %d is found at %d",val,i);
			break;
		}
	}
	if(i==n) {
		printf("\n Element not found");
	}
}	