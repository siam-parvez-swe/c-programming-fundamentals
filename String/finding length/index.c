#include<stdio.h>
int main()
{
    char ch[] = "Saim Parvez";

    // method 1
    // int n = 0, i= 0;
    // while (ch[i]!='\0')
    // {
    //     n++;
    //     i++;
    // }
    // printf("%d", i);

    // method 2
    int len = strlen(ch);
    printf("%d", len);
    
    return 0;
}