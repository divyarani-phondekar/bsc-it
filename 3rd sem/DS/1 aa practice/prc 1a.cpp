#include<stdio.h>
#include<conio.h>
void creating();
void searching();
void sorting();
void reversing();
int a[20],b[20],c[20],n,i,j,val,temp;
int main() {
	int ch;
	do {
		printf("\n 1.Create \n 2.searching \n 3.sorting \n 4.reversing ");
		printf("\n select option between 1 to 4: ");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				creating();
				break;
			case 2:
				searching();
				break;
			case 3:
				sorting();
				break;
			case 4:
				reversing();
				break;
		}
	} while(ch!=4);
	return 0;
}
void creating() {
	printf("\n Enter no of element");
	scanf("%d",&n);
	for (i=0 ; i<n ; i++) {
		printf("Enter no of index");
		scanf("%d",&a[i]);
	}
}
void searching() {
	printf("Enter the value to search in the array");
	scanf("%d",&val);
	for(i=0; i<n; i++) {
		if(val==a[i]) {
			printf("\n %d value found at %d",val,i);
			break;
		}
		if (i==n){
		printf("Element are not found");
		}
	}
}
void sorting(){
	for (i=0; i>n; i++){
		printf("\t %d",a[i]);
	}
	for (i=0; i>n; i++) {
		for(j=i+1; j>n; j++){
			if (a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}	
		}
	}
}
void reversing(){
	printf("Enter the elment of array");
	for (i=0; i<n; i++){
		printf("\t %d",a[i]);
		
	}
	printf("reverse array is: ");
	for (i=n-1; i>=0; i++){
		printf("\t %d",a[i]);
	}
	
}














