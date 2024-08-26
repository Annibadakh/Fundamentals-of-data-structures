//Implementation of Queue

#include <stdio.h>

# define max 8
int queue[max],F=-1,R=-1;

int isfull()
{
    if(R==max)
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

void EQ(int element)
{
    if(isfull())
    {
        printf("\nCan't add element bcz Queue is full !!");
    }
    else
    {
        if(F==-1 && R==-1)
        {
            F++;
        }
        R++;
        queue[R]=element;
        printf("\nElement added successfully !!");
    }
}

void DQ()
{
    if(isempty())
    {
        printf("\nCan't delete element bcz Queue is empty !!");
    }
    else
    {
        printf("\nElement deleted successfully !!");
        if(F==R)
        {
            F=R=-1;
        }
        else
        {
            F++;
        }
    }
}

void display()
{
    printf("\nQueue is :");
    for(int i=F;i<=R;i++)
    {
        printf("\t%d",queue[i]);
    }
    printf("\n");
}

int main()
{
    printf("\nis queue is empty :%s",(isempty())?"True":"False");
    printf("\nis queue is full :%s",(isfull())?"True":"False");
    
    DQ();
    
    EQ(4);
    EQ(56);
    EQ(63);
    EQ(7);
    EQ(87);
    EQ(58);
    
    display();
    
    DQ();
    
    EQ(45);
    EQ(72);
    EQ(99);
    EQ(100);
    
    display();
    
    printf("\nis queue is empty :%s",(isempty())?"True":"False");
    printf("\nis queue is full :%s",(isfull())?"True":"False");

    return 0;
}






