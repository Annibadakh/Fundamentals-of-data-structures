#include <stdio.h>

int main()
{
    int n,temp,j;
    printf("\nEnter size of array :");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements :");
    for(int l=0;l<n;l++)
    {
        scanf("%d",&arr[l]);
    }
    
    for(int i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while(temp>arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
    
    printf("Sorted array :\t")
    for(int k=0;k<n;k++)
    {
        printf("%d\t",arr[k]);
    }
    return 0;
}



