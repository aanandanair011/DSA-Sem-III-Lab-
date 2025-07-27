//to search an element fromt the array:;
#include<stdio.h>

int searchElement(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;

}

int main()
{
    int arr[100],n,key;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("Enter the element to search:");
    scanf("%d",&key);

    int index = searchElement(arr,n,key);

    if(index!=-1)
    {
        printf("Element %d found at index %d\n",key,index);
    }
    else
    {
        printf("Element %d not found in the array!\n",key);
    }
    return 0;
}
