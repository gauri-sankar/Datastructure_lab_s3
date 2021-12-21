#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void reads(int [],int );
void prints(int [],int);
void insort(int [],int );


void main()
{
    int a[50],num,n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");

        reads(a,n);
    

    insort(a,n);


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

void insort(int a[],int n) 
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}   

void insertionsort(int a[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0&&a[j]>key;j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
}