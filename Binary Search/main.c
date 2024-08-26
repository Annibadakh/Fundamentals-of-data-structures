#include<stdio.h>

int main()
{
    int flag,n,search,low,mid,high;
    
    printf("\nEnter size of array :");
    scanf("%d",&n);
    int array[n];
    
    printf("\nEnter value :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nEnter no. to find :");
    scanf("%d",&search);
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(array[mid]==search)
        {
            printf("\nElement found !!");
            printf("\nLocation is %d",mid+1);
            flag=1;
            break;
        }
        else if(array[mid]>search)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==0)
    {
        printf("\nElement not found !!");
    }
}




