#include <stdio.h>
#include <string.h>

int main()
{
    char ch[30] = "SIAM PARVEZ";
    //  strrev(ch);
    int i, len = strlen(ch);

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }

    return 0;
}