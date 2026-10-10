#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if (-100000 <= A && A <= 100000 &&
        -100000 <= B && B <= 100000 &&
        -100000 <= C && C <= 100000)
    {
        if (A <= B && A <= C)
        {
            printf("%d ", A);
        }
        else if (B <= A && B <= C)
        {
            printf("%d ", B);
        }
        else if (C <= A && C <= B)
        {
            printf("%d ", C);
        }

        if (A >= B && A >= C)
        {
            printf("%d", A);
        }
        else if (B >= A && B >= C)
        {
            printf("%d", B);
        }
        else if (C >= A && C >= B)
        {
            printf("%d", C);
        }
    }

    return 0;
}