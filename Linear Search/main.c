#include<stdio.h>

int main()
{
    int count=1,n,flag,search;
    
    printf("Enter size of array :");
    scanf("%d",&n);
    int array[n];
    
    printf("Enter value :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Enter no. to find :");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(array[i]==search)
        {
            printf("\nElement found !!");
            printf("\tCount is %d",count);
            printf("\tLocation is %d",i+1);
            count++;
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\nElement not found !!");
    }
}



