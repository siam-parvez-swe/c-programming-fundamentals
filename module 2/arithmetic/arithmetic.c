#include<stdio.h>
int main()
{
    int a = 5;
    int b = 2;

    int sum = a + b;
    printf("The summation of %d and %d is: %d\n", a, b, sum);

    int sub = a - b;
    printf("The subtraction of %d and %d is: %d\n", a, b, sub);
    
    int mul = a * b;
    printf("The multiplication of %d and %d is: %d\n", a, b, mul);

    float div = (float)a / b;
    printf("The division of %d and %d is: %f\n", a, b, div);

    return 0;
}