#include <stdio.h>

int n=4,Q[4],F=-1,R=-1;

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
        F=(F+1)%n;
    }
    if(F==R)
    {
        F=R=-1;
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
    eQ(34)
}