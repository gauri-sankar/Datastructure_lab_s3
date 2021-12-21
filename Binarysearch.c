#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void reads(int [],int );
void prints(int [],int);
void bubblesort(int [],int );
void binarysearch(int [],int,int);

void main()
{
    int a[50],num,n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");

        reads(a,n);
    printf("Enter the element to be searched:");
    scanf("%d",&num);

    bubblesort(a,n);


     printf("The sorted elements of the array is:");
    prints(a,n);

     binarysearch( a, n, num);



   
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

void bubblesort(int a[],int n) 
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

void binarysearch(int a[],int n,int num)
{
    int mid,left=0,right=n-1,flag=0;
    while (left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==num)
        {
            flag++;
            printf("\n The element is found at %d,after sorting.",mid+1);
            break;
        }
        else
        {
            if(num<a[mid])
            right=mid-1;
            else
            left=mid+1;
        }
    }
    if(flag==0)
    printf("The element is not found");
}