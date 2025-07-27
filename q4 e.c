//to find the smallest element from the array
#include<stdio.h>

int findMin(int arr[],int n)
{
    int min = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main()
{

    int arr[100],n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int smallest = findMin(arr,n);
    printf("The smallest element is %d\n",smallest);

    return 0;
}
