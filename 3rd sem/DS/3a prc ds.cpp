#include<stdio.h>
#define size 10
    void push();
void pop();
void peek();
int top=-1,val,stack[size];
int ch;
int main() {
	do {
		printf("\n 1.push \n 2.pop \n 3.peek \n 4.exit");
		printf("\nenter your choice:");
		scanf("%d",&ch);
		switch(ch) {
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				peek();
				break;
			case 4:
				break;
		}
	} while(ch!=4);
	return 0;
}
void push() {
	printf("\nenter the value:");
	scanf("%d",&val);
	if(top==size-1) {
		printf("\n stack is full");
	} else {
		stack[++top]=val;
		printf("inserted successfully");
	}
}
void pop() {
	printf("\n Enter 1 to delete or -1 to exit:");
	scanf("%d",&val);
	if(top==-1) {
		printf("\n stack is empty");
	} else {
		printf("\n delete element is %d ",stack[top]);
		top--;
	}
}
void peek() {
	printf("\n the top most element is %d ",stack[top]);
}


