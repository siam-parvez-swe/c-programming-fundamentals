#include <stdio.h>
int main()
{
    long long int X, Y, summation = 0, subtraction = 0; long long int multiplication = 1;
    scanf("%lld %lld", &X, &Y);
    summation = X + Y;
    multiplication = X * Y;
    subtraction = X - Y;
    if (1 <= X && Y <= 100000)
    {
        printf("%lld + %lld = %lld\n", X, Y, summation);
        printf("%lld * %lld = %lld\n", X, Y, multiplication);
        printf("%lld - %lld = %lld", X, Y, subtraction);
    }
    return 0;
}