#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[30] = "My name is ";
    char ch2[30] = "Siam Parvez";

    // with strcat
    // strcat(ch1, ch2);
    // printf("%s", ch1);

    // without strcat
    int i = 0, len = 0, j = 0;
    while (ch1[i] != '\0')
    {
        len++;
        i++;
    }
    while (ch2[j] != '\0')
    {
        ch1[len + j] = ch2[j];
        j++;
    }
    printf("%s", ch1);

    return 0;
}