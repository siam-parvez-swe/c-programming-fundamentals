#include <stdio.h>
int main()
{
    int N, X, pos = 0, neg = 0, odd = 0, even = 0;
    scanf("%d", &N);
    if (1 <= N <= 1000)
    {
        for (int i = 0; i < N; i++)
        {
            scanf("%d ", &X);
            if (-100000 <= X <= 100000)
            {
                if (X % 2 == 0 )
                {
                    even++;
                }
                if (X % 2 != 0)
                {
                    odd++;
                }
                if (X > 0)
                {
                    pos++;
                }
                if (X < 0)
                {
                    neg++;
                }
            }
        }
        printf("Even: %d\n", even);
        printf("Odd: %d\n", odd);
        printf("Positive: %d\n", pos);
        printf("Negative: %d", neg);
    }

    return 0;
}