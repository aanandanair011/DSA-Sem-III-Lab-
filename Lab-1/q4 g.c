//Delete an element from a given position in the array

#include<stdio.h>

int deleteElement(int arr[],int*n,int pos)
{
    if(pos<0||pos>=*n)
    {
        return 0;
    }

    for(int i=pos;i<*n-1;i++)
    {
        arr[i]=arr[i+1];
    }
     (*n)--;
     return 1;
}

int main()
{
    int arr[100],n,pos;

    printf("Enter number of elements:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr[i]);
    }
    printf("Enter position to delete (0-based index):");
    scanf("%d",&pos);

        if(deleteElement(arr,&n,pos))
        {
            printf("Element deleted succesfully.\n");

            printf("Updated array:");
            for(int i=0;i<n;i++)
            {
                printf("%d",arr[i]);
            }
            printf("\n");
        }
        else{
            printf("Delettion failed. Invalid position.\n");
        }
        return 0;
    }


