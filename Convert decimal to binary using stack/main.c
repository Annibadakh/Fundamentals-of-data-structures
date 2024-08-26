/* Application of stack
   Convert decimal to binary using stack */
   
#include <stdio.h>
#include <math.h>

int stack[50];
int top=-1;

int pop()
{
    int data=stack[top];
    top--;
    return data;
}

void push(int element)
{
    top++;
    stack[top]=element;
}

int main()
{
    int num,element,binary=0;
    printf("\nEnter Decimal no. :");
    scanf("%d",&num);
    
    while(num>0)
    {
        element=(num%2);
        push(element);
        num/=2;
    }
    for(int i=top;i>=0;i--)
    {
        
        binary+=(pop()*pow(10,i));
    }
    printf("\nBinary no. is : %d",binary);
    
    return 0;
}


