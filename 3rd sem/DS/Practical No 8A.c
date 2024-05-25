#include<stdio.h>
#include<conio.h>
#define size 30
int a[size],n;
void maxheapify(int a[],int i,int n1);
void buildheap(int a[],int n1);
void swap(int i,int j);
int main()
{
int i,j;
    printf("Enter no. of elements :");
scanf("%d",&n);
printf("\n Enter array elements : ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);

}
buildheap(a,n);
printf("The min heap is:");
for(j=0;j<n;j++)
{
printf("%d\t",a[j]);
}
    printf("\n");
    getch();
   
}
void buildheap(int a[],int n1)
{
int i,j;
for(i=(n1/2)-1;i>=0;i--)
{
maxheapify(a,i,n1);
}
}

void maxheapify(int a[],int i,int n1)
{
int max,l,r;
max=i;
l=(2*i)+1;
r=(2*i)+2;
if(l<n1 && r<n1)
{
if(a[l]<a[max])
{
max=l;
}
if(a[r]<a[max])
{
max=r;
}
}
else if(l<n1 && r>=n1)
{
if(a[l]<a[max])
{
max=l;
}
}
else if(l>=n1 && r<n1)
{
if(a[r]<a[max])
{
max=r;
}
}
if(i!=max)
{
swap(i,max);
maxheapify(a,max,n1);
}
}

 void swap(int i,int j)
{
int temp=a[j];
a[j]=a[i];
a[i]=temp;

}


