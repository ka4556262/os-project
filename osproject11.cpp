#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 	int n;   
 	int r;      
 	int i,j,k;
 	int nd[10][10],allocation[10][10],maximum[10][10];
 	int available[10],p[10];
 	printf("\nEnter the total number of process :");
 	scanf("%d",&n);
 	printf("\n Enter the total number ofresources available : ");
 	scanf("%d",&r);
 	printf("\nEnter the number instances for resources :\n");
 	for(i=0;i<r;i++)
 	{
	   printf("R%d ",i+1);
	   scanf("%d",&available[i]);
	}
	 printf("\n Enter allocationation matrix  \n");
	 for(i=0;i<n;i++)
	 {
	 printf("p%d",i+1);          p[i]=0;
	 for(j=0;j<r;j++)
 	 {
  	 scanf("%d",&allocation[i][j]);
 	 }
}
  printf("\n Enter the maximum matrix  \n");

 for(i=0;i<n;i++)
 {
 	printf("p%d",i+1);
	for(j=0;j<r;j++)
	{
  	scanf("%d",&maximum[i][j]);
 	}
 }

 for(i=0;i<n;i++)
 {
	printf("\np%d\t",i+1) ;
	for(j=0;j<r;j++)
 	{
    nd[i][j]=maximum[i][j]-allocation[i][j];
    printf("\t%d",nd[i][j]);
    }
 }
 
	 printf("\n\n");
	 int fl=0;
	 for(i=0;i<n;i++) 
	{ 
		for(j=0;j<r;j++) 
		{ 
			if(available[j]>=nd[i][j]) 
			fl=1; 
			else 
				fl=0; 
		}	 
	} 
	if(fl==0) 
	printf("the system is in Unsafe State"); 
	else 
	printf("the system is in Safe State");
}
