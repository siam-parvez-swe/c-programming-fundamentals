#include<stdio.h>
int main()
{
    char str[100], ch;
    int i, cpital, small, digit;
    i = cpital = small = digit =0;
    printf("Enter a string \n");
    fgets(str, sizeof(str), stdin);

    while (str[i]!='\0')
    {
        if (str[i]>=65 && str[i]<=90)
        {
            cpital++;
        }
        else if (str[i]>=97 && str[i]<=122)
        {
            small++;
        }
        else if (str[i]>=48 && str[i]<=57)
        {
            digit++;
        }
        i++;
    }

    printf("Capital = %d\n", cpital);
    printf("Small = %d\n", small);
    printf("Digit = %d", digit);
    
    return 0;
}