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

void lsearch(int a[],int n,int num)
{
    int b[50],i,j,k=0,count=0;
    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            k=i;
            count++;
           
            
        }
    }

    if(count>0)
    
    {
     
    
    printf("\n The element is found at %d",k);
    
    }
    else 
    printf("\n The element is not found");

    
}

void main()
{
     int a[50], n,num;

    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter the elements of the array:");

        reads(a,n);
    printf("Enter the element to be searched:");
    scanf("%d",&num);


     printf("The  elements of the array is:");
    prints(a,n);

     lsearch( a, n, num);
     getch();
     system("cls");

}
