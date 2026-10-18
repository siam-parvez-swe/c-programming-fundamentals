#include <stdio.h>
int main()
{
    int i, j, uppersum = 0, lowersum = 0;
    int A[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i < j)
            {
                uppersum = uppersum + A[i][j];
            }
            if (i > j)
            {
                lowersum = lowersum + A[i][j];
            }
        }
    }
    printf("%d ", uppersum);
    printf("%d ", lowersum);

    return 0;
}