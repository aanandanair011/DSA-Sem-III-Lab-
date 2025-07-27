//insert an element at a given position:

#include<stdio.h>

int insertElement(int arr[],int *n,int pos,int val) {
    if(*n >=100||pos<0||pos>*n){
        return 0;
    }
    for(int i=*n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    (*n)++;
    return 1;
}

int main() {
    int arr[100],n,pos,val;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position to insert at (0-based index): ");
    scanf("%d",&pos);
    printf("Enter value to insert: ");
    scanf("%d",&val);

    if(insertElement(arr,&n,pos,val)) {
        printf("Element inserted succesfully.\n");

        printf("Updated array: ");
        for(int i=0;i<n;i++) {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    else{
        printf("Insertion failed. Invalid position or array is full.\n");
    }

    return 0;
}
