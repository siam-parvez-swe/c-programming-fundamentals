#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    // int b[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
    }
    int i = 0, j = n-1;
    // method 1
    // for (int i = 0, j = n-1; i < j; i++, j--)
    // {
    //     int temp;
    //     temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    // }

    // method 2
    while (i<j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    } 
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    // for (int i = 0; i < n; i++)
    // {
    //     b[i] = a[n-i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", b[i]);
    // }

    
    
    return 0;
}