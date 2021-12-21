#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void reads(int [],int );
void prints(int [],int);
void mergesort(int [],int,int );
void simplemerge(int [],int ,int,int);


void main()
{
    int a[50],num,n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");

        reads(a,n);
    

    mergesort(a,0,n-1);


     printf("The sorted elements of the array is:");
    prints(a,n);





   
    getch();

    system("cls");

    

}

void reads(int a[],int n)
{
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}

void prints(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t %d",a[i]);
    }

}

void mergesort(int a[],int left,int right) 
{
    if(left<right)
    {
        int mid=(left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        simplemerge(a,left,mid+1,right);
    }
}   

void simplemerge(int a[],int f, int s, int t )
{
   int temp[100], i=f,j=s,k=0;
	while(i<s && j<=t)
	{
		if(a[i]<a[j])	
			temp[k++] = a[i++];
		else
			temp[k++] = a[j++];
	}
	while(i<s)
		temp[k++] = a[i++];
	while(j<=t)
		temp[k++] = a[j++];
	for(i=f,j=0;j<k;)
		a[i++]=temp[j++];
}
