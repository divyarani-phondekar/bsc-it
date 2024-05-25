#include<stdio.h>
#define size 3
int queue[size],rear=-1,front=-1,te=0,x,i;
void insert_rear();
void insert_front();
void del_rear();
void del_front();
void display();

int main() {
	int opt;
	do {
		
		printf("\n 1.Insert at rear \n 2.Insert at front \n 3.Delete from rear \n 4.Delete from front \n 5.Display \n 6.Exit ");
		printf("\n Enter an option : ");
		scanf("%d",&opt);
		switch(opt) {
			case 1:
				insert_rear();
				break;
			case 2:
				insert_front();
				break;
			case 3:
				del_rear();
				break;
			case 4:
				del_front();
				break;
			case 5:
				display();
				break;
			case 6:
				break;
			default:
				printf("\n Select option between 1 to 5");
		}
	} while(opt!=6);
	return 0;
}
void insert_rear() {
	int val;
	printf("\n Enter the value : ");
	scanf("%d",&val);
	if (te==size) {
		printf("Queue is full");
	} else if(te==0) {
		rear=front=0;
		queue[rear]=val;
		te=te+1;
	} else {
		rear=(rear+1)%size;
		queue[rear]=val;
		te=te+1;
	}
}
void insert_front() {
	int val;
	printf("\n Enter the value : ");
	scanf("%d",&val);
	if (te==size) {
		printf("Queue is full");
	} else if(te==0) {
		rear=front=0;
		queue[rear]=val;
		te=te+1;
	} else {
		if(front==0) {
			front=size-1;
		} else {
			front=front-1;
		}
		queue[front]=val;
		te=te+1;
	}
}
void del_rear() {
	if(te==0) {
		printf("\n Queue is empty \n ");
	} else {
		if(rear==-1) {
			rear=size-1;
		}
		printf("\n Number deleted from rear end = %d",queue[rear]);
		rear=rear-1;
		te=te-1;
	}
}
void del_front() {
	if(te==0) {
		printf("\n Queue is empty \n ");
	} else {
		printf("\n Number deleted from rear end = %d",queue[front]);
		front=(front+1)%size;
		te=te-1;
	}
}
void display() {
	if(te==0) {
		printf("\n Queue is empty");
	} else {
		x=front;
		for(i=1; i<=te; i++) {
			printf("\t%d",queue[x]);
			x=(x+1)%size;
		}
	}
}
