#include <stdio.h>
int main()
{
    int i, j, x, y;
    scanf("%d %d", &x, &y);
    int A[x][y];

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d ", &A[i][j]);
        }
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}