#include<stdio.h>
int main()
{
    int A[10][10], transpose[10][10],i,j,row,col;
    printf("Enter number of row and columns for the matrix \n");
    scanf("%d %d", &row, &col);
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            scanf("%d ", &A[i][j]);
        }
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // transpose
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            transpose[j][i] = A[i][j];
        }
        
    }
    printf("Transpose\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
        
    }
    
    
    return 0;
}