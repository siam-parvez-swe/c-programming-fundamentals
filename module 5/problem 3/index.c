#include <stdio.h>
int main()
{
    int X;
    scanf("%d", &X);
    if (999 < X <= 9999)
    {
        int a = X / 1000;
        if (a % 2 == 0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    return 0;
}