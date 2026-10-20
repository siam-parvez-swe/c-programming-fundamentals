#include <stdio.h>
#include <string.h>

int main()
{
    char ch1[30] = "SIAM PARVEZ";
    char ch2[30];
    //  strrev(ch);
    int i, len = strlen(ch1), j = 0;

    for (i = len - 1; i >= 0; i--)
    {
        ch2[j] = ch1[i];
        j++;
    }
    // ch2[j] = '\0';

    // printf("%s", ch2);
    int d = strcmp(ch1, ch2);
    if (d==0)
    {
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    

    return 0;
}