#include<stdio.h>
void add()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Sum: %d\n", sum);
}
int main()
{
    add();
    return 0;
}