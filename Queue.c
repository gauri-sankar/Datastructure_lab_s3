 #include <stdio.h>
 #include<stdlib.h>
 #define max 5
int f=-1,r=-1,q[max];

int isempty()
{
    if(f==-1)
    return 1;
    else 
    return 0;
}

int isfull()
{
    if((r+1)%max==f)
    return 1;
    else 
    return 0;
}

void insertitem(int item)
{
    if(isfull())
    printf("The queue is filled");
    else
    {
        if((f==-1)&&(r==-1))
       { f=0;
         r=0;
         q[r]=item;
       }
        else
       { r=(r+1)%max;
         q[r]=item;
       }

    }
}

int deleteitem()
{ 
    int item;
    if(isempty())
   { printf("The queue is empty.");
    return 0;
   }
    else
    {
        item=q[f];
        if(f==r)
        f=r=-1;
        else
        f=(f+1)%max;
    }
    return item;
}


void Displayqueue()
{ 
    if(    isempty())
    printf("EMpty");
else{
    for(int i=f;i<=r;i++)
    
    printf("%d\t ",q[i]);

}
}

void main()
{
    int numdeleted,choice,numaddeed;
    do
    {
        printf("Enter your choic:");
        printf("1.Enqueue\n2.Deque\n3.Print elements\n4.Exit ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:printf("Enter the number to be added:");
            scanf("%d",&numaddeed);
            insertitem(numaddeed);
            break;

            case 2:numdeleted=deleteitem();
            if (numdeleted==0))
            {
                printf("Deletion not possible");
            }
            
            else
            printf("The element removed is %d",numdeleted);
            break;

            case 3:Displayqueue();
            break;

            case 4:printf("Exiting.....");
            exit(0);
        }
    }while(choice!=4);

}