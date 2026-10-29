#include <stdio.h>
#include <string.h>
int main()
{
    char s[15], t[15];
    scanf("%s %s", &s, &t);
    printf("%d %d\n", strlen(s), strlen(t));
    printf("%s%s\n", s, t);
    int lenS = strlen(s);
    int lenT = strlen(t);
    // int a = s[0];
    // int b = t[lenT-1];

    for (int i = 0, j = 0; i < lenS, j < lenT; i++, j++)
    {
        int tem = s[0];
        s[0] = t[0];
        t[0] = tem;
        printf("%s %s", s, t);
        break;
    }

    return 0;
}