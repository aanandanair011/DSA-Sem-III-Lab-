#include<stdio.h>

void findLeaders(int arr[],int n)
{
    int maxRight = arr[n-1];
    printf("Leader elements are: %d \n",maxRight);

    for(int i = n-2;i>=0;i--)
    {
        if(arr[i] > maxRight)
        {
            maxRight = arr[i];
            printf("%d",maxRight);
        }
    }
    printf("\n");
}

int main()
{
    int arr[100],n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    findLeaders(arr,n);

    return 0;
}
