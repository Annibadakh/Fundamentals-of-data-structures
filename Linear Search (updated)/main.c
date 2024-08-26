#include<stdio.h>

int main()
{
    int array[50],count,n,search,loc[50],j;
    
    printf("Enter size of array :");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        printf("Enter value :");
        scanf("%d",&array[i]);
    }
    printf("Enter no. to find :");
    scanf("%d",&search);
    for(int i=0;i<n;i++)
    {
        if(array[i]==search)
        {
            printf("Element found !!");
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(array[i]==search)
        {
            count++;
            loc[j]=i+1;
            j++;
        }
    }
    printf("\ncount is %d",count);
    printf("\nlocation is ");
    for(int i=0;i<count;i++)
    {
        printf("%d\t",loc[i]);
    }
}