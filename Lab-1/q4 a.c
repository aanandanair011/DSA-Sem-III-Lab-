#include<stdio.h>

void traverse(int arr[],int n)
{
    printf("Array elements are: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
    printf("\n");

}
    int main()
    {
        int arr[100],n;

        printf("Enter number of elements:\n ");
        scanf("%d",&n);

        printf("Enter array elements:\n");
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        traverse(arr,n);

        return 0;

    }
