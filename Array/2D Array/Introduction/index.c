#include <stdio.h>
int main()
{
    int A[3][4] = {{1, 2, 3}, {4, 5, 6, 7}, {0, 8, 9, 10}};
    int i, j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
        
    }
    

    return 0;
}