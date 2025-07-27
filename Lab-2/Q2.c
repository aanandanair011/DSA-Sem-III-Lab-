/*
1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
*/

#include<stdio.h>

int main()
{
    int matrix[4][4];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(i==j)
                matrix[i][j] = 1;
            else
                matrix[i][j]=0;
        }
    }

    printf("Identity Matrix:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
