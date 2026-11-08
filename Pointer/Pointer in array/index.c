#include<stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    *a=100;
    *(a+1)=200;
    *(a+2)=300;
    // printf("%p\n", &a[0]);
    // printf("%p\n", &a[1]);
    // printf("%p\n", &a[2]);
    // printf("%p\n", &a[3]);
    // printf("%p\n", &a[4]);
    // printf("%d\n", *a);
    for (int i = 0; i < 5; i++)
    {
        // printf("%d\n", *(a+i));
        printf("%d\n", a[i]);
    }
    
    return 0;
}