// Impelementation of stack

#include <stdio.h>

# define max 6
int stack[max],top=-1;

int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull()
{
    if(top==max)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void peek()
{
    if(top==-1)
    {
        printf("\nCan't display element bcz Stack is empty !!");
    }
    else
    {
        printf("\nTop element of Stack is %d",stack[top]);
    }
}

void pop()
{
    int data;
    if(isempty())
    {
        printf("\nCan't delete elemant bcz Stack is empty !!");
    }
    else
    {
        
        top-=1;
        printf("\nElement deleted successfully !!");
    }
}

void push(int element)
{
    if(isfull())
    {
        printf("\nCan't add element bcz Stack is full !!");
    }
    else
    {
        top+=1;
        stack[top]=element;
        printf("\nElement added successfully !!");
    }
}

void display()
{
    printf("\nStack is :");
    for(int i=top;i>=0;i--)
    {
        printf("\t%d",stack[i]);
    }
    printf("\n");
}


int main()
{
    printf("\nis stack is empty :%s",(isempty())?"True":"False");
    printf("\nis stack is full :%s",(isfull())?"True":"False");
    
    peek();
    
    push(2);
    push(4);
    push(5);
    
    pop();
    
    push(6);
    
    peek();
    
    display();
    
    printf("\nis stack is empty :%s",(isempty())?"True":"False");
    printf("\nis stack is full :%s",(isfull())?"True":"False");

    return 0;
}