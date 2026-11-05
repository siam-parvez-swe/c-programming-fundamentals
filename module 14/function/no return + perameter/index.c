#include<stdio.h>
void add(int a, int b)
{
    int sum = a + b;
    printf("Sum: %d\n", sum);
}
int main()
{
    add(5, 10);
    return 0;
}