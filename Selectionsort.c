#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


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

void selectionsort(int a[],int n) 
{
    int j,temp,smallest,ind;
    for(int i=0;i<n-1;i++)
    {
        smallest=a[i];
        ind=i;
        for( j =i+1;j<n;j++)
        {
            if(smallest>a[j])
            {
                smallest=a[j];
                ind=j;
            }
        }
        if(smallest!=a[i])
        {
            swap(&a[ind],&a[i]);
            
        }
    }    
}

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a[50], n;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");

    reads(a,n);
    selectionsort(a,n);

    printf("The sorted elements of the array is:");
    prints(a,n);
    getch();

    system("cls");

    

    
}