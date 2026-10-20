#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[30] = "SIAM PARVEZ";
    char ch2[30] = "SIAM";
    int d = strcmp(ch1, ch2);

    if (d==0)
    {
        printf("Strings are equal");
    }
    else{
        printf("Strings are not equal");
    }
    
    return 0;
}