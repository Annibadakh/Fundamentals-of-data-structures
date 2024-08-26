// Implementation of Circular Queue

#include <stdio.h>

# define max 6
int queue[max],F=-1,R=-1;

int isfull()
{
    if((F==R+1) || (F==0 && R==max-1))
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
        printf("\nCan't add element bcz Queue is full !!");
    }
    else
    {
        if(F==-1)
        {
            F++;
        }
        R=(R+1)%max;
        queue[R]=num;
        printf("\nElement added successfully !!");
    }
}

int dQ()
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
            F=(F+1)%max;
        }
    }
}

int display()
{
    printf("\nQueue is:");
    for(int i=F;i!=R;i=(i+1)%max)
    {
        printf("\t%d",queue[i]);
    }
    printf("\t%d",queue[R]);
    printf("\n");
}

int main()
{
    printf("\nis queue is empty :%s",(isempty())?"True":"False");
    printf("\nis queue is full :%s",(isfull())?"True":"False");
    
    dQ();
    
    enQ(4);
    enQ(56);
    enQ(63);
    enQ(7);
    enQ(87);
    enQ(58);
    
    display();
    
    dQ();
    
    enQ(45);
    enQ(72);
    
    display();
    
    printf("\nis queue is empty :%s",(isempty())?"True":"False");
    printf("\nis queue is full :%s",(isfull())?"True":"False");
    
    dQ();dQ();dQ();dQ();dQ();dQ();dQ();
    
    enQ(45);
    
    printf("\nis queue is empty :%s",(isempty())?"True":"False");
    printf("\nis queue is full :%s",(isfull())?"True":"False");
   
    return 0;
}






