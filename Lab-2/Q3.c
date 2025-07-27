#include<stdio.h>

int main()
{
    int rows,cols;

    printf("Enter number of rows:");
    scanf("%d",&rows);

    printf("Enter number of columns:");
    scanf("%d",&cols);

    if(rows==cols)
    {
        printf("The matrix is a square matrix(%dX%d).\n",rows,cols);
    }
    else
    {
         printf("The matrix is not a square matrix(%dX%d).\n",rows,cols);
    }
    return 0;
}
