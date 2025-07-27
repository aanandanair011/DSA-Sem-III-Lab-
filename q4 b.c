#include<stdio.h>

int getLength(int arr[],int n)
{
    return n;
}

int main()
{
    int arr[100],n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(int i = 0;i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int length = getLength(arr,n);
    printf("Length of the array is %d\n",length);
    return 0;
}
