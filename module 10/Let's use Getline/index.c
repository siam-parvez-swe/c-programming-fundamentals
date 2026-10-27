#include <stdio.h>

int main()
{
    char S[100000];

    fgets(S, 100001, stdin);

    for (int i = 0; i < 100001; i++)
    {
        if (S[i] != '\\')
        {
            printf("%c", S[i]);
        }
        else
        {
            break;
        }
    }

    return 0;
}