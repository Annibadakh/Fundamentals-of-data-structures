#include<stdio.h>  /* Header file */

int main()  /* Main function */
{
    int n,temp;  /* Decleration of variables */
    printf("\nEnter size of array :");
    scanf("%d",&n);  /* Accept size of array */
    int arr[n];  /* Decleration of array */
    printf("\nEnter values :");
    for(int a=0;a<n;a++)
    {
        scanf("%d",&arr[a]);  /* Accepting elements from user */
    }
    /* Implemantation of algorithm */
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    /* Display Sorted array */
    printf("Sorted array :\t");
    for(int k=0;k<n;k++)
    {
        printf("%d\t",arr[k]);
    }
    return 0;
}



