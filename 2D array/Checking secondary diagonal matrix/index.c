#include<stdio.h>
#include<stdbool.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d ", &arr[i][j]);
        }
        // printf("\n");
    }
    bool is_diagonal = true;
    if (r==c)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i+j!=r-1)
                {
                    if (arr[i][j]!=0)
                    {
                        is_diagonal = false;
                        printf("Not a primary diagonal matrix");
                    }
                }
                
            }
        }
        if (is_diagonal==true)
        {
            printf("Primary diagonal matrix");
        }
    }
    else{
        printf("Not a diagonal matrix");
    }
    return 0;
}