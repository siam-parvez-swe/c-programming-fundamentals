#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[30] = "My name is ";
    char ch2[30] = "Siam Parvez";

    strcat(ch1, ch2);
    printf("%s", ch1);

    return 0;
}