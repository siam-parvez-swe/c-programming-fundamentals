#include <stdio.h>
int main()
{
    int x = 10;
    int a[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int b[5] = {1, 2};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}