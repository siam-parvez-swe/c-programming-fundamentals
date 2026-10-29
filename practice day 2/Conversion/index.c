#include <stdio.h>
int main()
{
    char str[100001];
    fgets(str, sizeof(str), stdin);
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i]>=65 && str[i]<=90)
        {
            printf("%c", str[i] + 32);
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            printf("%c", str[i] - 32);
        }
        else if (str[i]==',')
        {
            printf(" ");
        }
        
        i++;
    }
    return 0;
}