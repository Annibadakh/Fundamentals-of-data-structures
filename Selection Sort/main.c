#include <stdio.h> /* Header file */

int main()  /* Main function */
{
    int n,position,swap;  /* Decleration of variables */
    printf("\nEnter size :");
    scanf("%d",&n);  /* Accept size of array from user */
    int arr[n];  /* Decleration of array */
    printf("\nEnter Elements:\n");
    for(int l=0;l<n;l++)
    {
        scanf("%d",&arr[l]);  /* Accept elements from user */
    }
    /* Implemantation of algorithm */
    for(int i=0;i<n-1;i++)
    {
        position=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[position]>arr[j])
            {
                position=j;
            }
        }
        if(position!=i)
        {
            swap=arr[i];
            arr[i]=arr[position];
            arr[position]=swap;
        }
    }
    /* Display sorted array */
    printf("Sorted array :\t")
    for(int k=0;k<n;k++)
    {
        printf("%d\t",arr[k]);
    }
    return 0;
}


