#include <stdio.h>

int main()
{
    char s1[30];

    fgets(s1, sizeof(s1), stdin);

    printf("%s", s1);

    return 0;
}