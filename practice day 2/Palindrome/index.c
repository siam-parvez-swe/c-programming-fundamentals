#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001];

    scanf("%s", s1);
    int len = strlen(s1);
    int fog = 0;
    for (int i = 0, j = len - 1; i < j; i++, j--)
    {
        if (s1[i] != s1[j])
        {
            fog = 1;
            printf("NO");
            break;
        }
    }
    if (fog == 0)
    {
        printf("YES");
        
    }

    return 0;
}