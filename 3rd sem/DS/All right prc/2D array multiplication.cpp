#include<stdio.h>

int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,c1,r2,c2,k,sum;
	
	printf("enter no.of rows for array A : \n");
	scanf("%d",&r1);
	printf("enter no.of cols for array A : \n");
	scanf("%d",&c1);
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("Enter value for A %d %d \n",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("The Array A is : \n");
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("%d \t",a[i][j]);
			
		}
		printf("\n");
	}
	
	
	printf("enter no.of rows for array B : \n");
	scanf("%d",&r2);
	printf("enter no.of cols for array B : \n");
	scanf("%d",&c2);
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("Enter value for A %d %d \n",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("The Array B is : \n");
	
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d \t",b[i][j]);
			
		}
		printf("\n");
	}
	
	//multiplication
	
	if(c1==r2)  //r1=2 c1=3    r2=3 c2=2
	{
	  for(i=0;i<r1;i++)// 1<2
	  {
	  	for(j=0;j<c2;j++)//0<<2
	  	{
	  		for(k=0;k<r2;k++)//0<3
	  		{
	  			sum=sum+(a[i][k]*b[k][j]);  //sum=100
			  }
			  c[i][j]=sum;  //c[0][1]=100
			  sum=0;
		  }
		  }	
		  
		  printf("Array after multiplication is \n");
		  
		  for(i=0;i<r1;i++)
		  {
		  	for(j=0;j<c2;j++)
		  	{
		  		printf("%d \t",c[i][j]);
			  }
			  printf("\n");
		  }
	}
	
	else
	{
		printf("Multiplication not possible");
	}
	
	return 0;
}