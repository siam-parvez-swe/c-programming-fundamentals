#include<stdio.h>
int main()
{
    int a = 30;
    printf("Value of a: %d\n", a);
    // printf("Address of x: %p\n", &a);

    int* ptr = &a;
    *ptr = 20;
    printf("Value of ptr: %p\n", ptr);
    printf("Value of a: %d\n", *ptr);
    return 0;
}