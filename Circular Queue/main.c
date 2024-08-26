
#include <stdio.h>

int n=6,Q[6],F=-1,R=-1;

int isfull()
{
    if((F==R+1) || (F==0 && R==n-1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty()
{
    if(F==-1 && R==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int enQ(int num)
{
    if(isfull())
    {
        printf("\nQueue is full !!");
    }
    else
    {
        if(F==-1)
        {
            F++;
        }
        R=(R+1)%n;
        Q[R]=num;
        printf("\nElement added!!");
    }
}

int dQ()
{
    if(isempty())
    {
        printf("\nQueue is empty");
    }
    else
    {
        return Q[F];
        if(F==R)
        {
            F=R=-1;
        }
        else
        {
            F=(F+1)%n;
        }
        
    }
}

int display()
{
    printf("\nQueue is:");
    for(int i=F;i!=R;i=(i+1)%n)
    {
        printf("\t%d",Q[i]);
    }
    printf("\n");
}

int main()
{
    int choice,element,num;
    do
    {
        printf("\n.............Meun..............");
        printf("\n1.Check isFull \n2.is Empty \n3.Enqueue \n4.Dqueue \n5.Display Queue");
        printf("\nEnter choice :");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                (isfull())?(printf("\nQueue is full")):(printf("\nQueue is not full"));
            break;
            
            case 2:
                (isempty())?(printf("\nQueue is empty")):(printf("Queue is not empty"));
            break;
            
            case 3:
                printf("\nEnter Element to enqueue :");
                scanf("%d",&element);
                enQ(element);
            break;
            
            case 4:
                num=dQ();
                printf("\n%d is deleted !!",num);
            break;
            
            case 5:
                display();
            break;
        }
        printf("\n 1.Continue 2.Stop :");
        scanf("%d",&num);
    }while(num!=2);
    

    return 0;
}




