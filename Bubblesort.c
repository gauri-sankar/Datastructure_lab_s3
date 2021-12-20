#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int reads(int [],int );
int prints(int [],int);
int bubblesort(int [],int);

void main()
{
    int a[50], n;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");

    reads(a,n);
    bubblesort(a,n);

    printf("The sorted elements of the array is:");
    prints(a,n);

    getch();

    system("cls");

    
}

int reads(int a[],int n)
{
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
}

int prints(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\t %d",a[i]);
    }

}
    

int bubblesort(int a[],int n) 
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
