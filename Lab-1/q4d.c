#include<stdio.h>

int findMax(int arr[],int n)
{

    int max = arr[0];

    for(int i=1;i<n;i++)
    {

        if (arr[i]>max)
        {

            max = arr[i];

        }
    }
    return max;
}

int main()
{
    int arr[100],n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    int largest=findMax(arr,n);
    printf("The largest element is %d\n",largest);


    return 0;
}
