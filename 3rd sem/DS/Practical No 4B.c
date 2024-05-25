#include<stdio.h>
#define size 3
int front=-1,queue[size],rear=-1,val,i;
void insert();
void del();
void disp();
int main()
{
int ch;
do{
printf("\n554-B-SAKSHI PAWAR");
printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit");
printf("\nPlease enter the choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:insert();
break;
case 2:del();
break;
case 3:disp();
break;
case 4:
break;
}
}while(ch!=4);
return 0;
}
void insert()
{
printf("Enter the value :");
scanf("%d",&val);
if(front==-1)
{
front++,rear++;
queue[rear]=val;
printf("\n Inserted Successfully...!!");
}
else if((rear==size-1 && front==0)||(front==rear+1))
{
printf("\nQueue is full..!!");
}
else
{
rear=(rear+1)%size;
queue[rear]=val;
printf("\n Inserted Successfully..!!");
}
}
void del()
{
if(front==-1)
{
printf("\nQueue is empty\n");
}
else if(rear==front && rear!=-1)
{
val=queue[front];
printf("\nThe value deleted is %d ",val);
front=rear=-1;
}
else
{
val=queue[front];
printf("\nValue deleted is %d ",val);
front=(front+1)%size;
}
}
void disp()
{
if(rear==-1)
{
printf("\nQueue is empty");
}
else
{
for(i=front;i!=rear;i=(i+1)%size)
{
printf("\t%d",queue[i]);
}
printf("\t%d",queue[i]);
}
}
