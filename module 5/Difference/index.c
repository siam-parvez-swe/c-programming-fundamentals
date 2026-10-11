#include <stdio.h>
int main()
{
    long long int A, B, C, D, X;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    // if (-100000 <= A && A <= 10000 &&
    //     -100000 <= B && B <= 10000 &&
    //     -100000 <= C && C <= 10000 - 100000 <= D && D <= 10000)
    // {
    X = (A * B) - (C * D);
    printf("Difference = %lld", X);
    // }
    return 0;
}