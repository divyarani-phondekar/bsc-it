
#include<iostream>
using namespace std;
#define size 6
int queue[size],rear=-1,front=-1,te=0,x,i;
void insert_rear();
void insert_front();
void del_rear();
void del_front();
void display();
int main()
{
	int opt;
	do {
		cout<<"\n1.Insert at rear\n2.Insert at front\n3.Delete from rear\n4.Delete from front\n5.Display\n";
		cout<<"\nEnter a option : ";
		cin>>opt;
		switch(opt)
		{
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
				cout<<"\n\nSelect a valid option between 1-5";
		}
	} while(opt!=6);
	return 0;
}
void insert_rear()
{
	int val;
	cout<<"\nEnter a value: ";
	cin>>val;
	if(te==size)
		cout<<"Queue is full\n";
	else if(te==0)
	{
		rear=front=0;
		queue[rear]=val;
		te=te+1;
	}
	else
	{
		rear=(rear+1)%size;
		queue[rear]=val;
		te=te+1;
	}
}
void insert_front()
{
	int val;
	cout<<"\nEnter a value: ";
	cin>>val;
	if(te==size)

		cout<<"\nQueue is full";



	else if(te==0)

	{

		rear=front=0;

		queue[rear]=val;

		te=te+1;

	}

	else

	{

		if(front==0)

		{

			front=size-1;
		}
		else
		{
			front= front-1;
		}
		queue[front]=val;
		te=te+1;
	}
}
void del_rear()
{
	if(te==0)
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		if(rear==-1)
		{
			rear=size-1;
		}
		cout<<"\nNumber Deleted from Rear End ="<<queue[rear];
		rear=rear-1;
		te=te-1;
	}
}
void del_front()
{
	if(te==0)
	{
		cout<<"Queue is Empty\n";
	}
	else
	{
		if(rear==-1)
		{
			rear=size-1;
		}
		cout<<"\nNumber Deleted from front End ="<<queue[front];
		front=(front+1)%size;
		te=te-1;
	}
}
void display()
{
	if(te==0)
	{

		cout<<"\nQueue is empty";
	}
	else
	{
		x=front;
		for(i=1; i<=te; i++)
		{
			cout<<queue[x]<<"\t";
			x=(x+1)%size;
		}
	}
}

