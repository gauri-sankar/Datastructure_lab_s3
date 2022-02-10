#include<stdio.h>

struct Polynomial
{
    int expo;
    float coeff;
}f[10];

void readpoly(int term)
{
    int j=term;
    for(int i=0;i<term;i++)
    {
         printf("Enter the degree:");
        scanf("%d",&f[i].expo);
       
       
        printf("Enter the coefficent:");
        scanf("%f",&f[i].coeff);

    }
}

void printpoly(int term)
{
 
    
    int j=term;
    for(int i=0;i<term;i++)
    {
        if(i!=term-1)
        printf("%f x^%d+",f[i].coeff,f[i].expo);
        else
        printf("%f x^%d",f[i].coeff,f[i].expo);

    }
}    

void main()
{
   //struct Polynomial f[10];
    int term;
    printf("Enter the number of terms of the array:");
    scanf("%d",&term);
    readpoly(term);
    printpoly(term);
}