#include<stdio.h>
#include<string.h>
int main()
{
    char ch1[30] = "Siam";
    char ch2[30] = "Parvez";
    char temp[30];

    strcpy(temp, ch1);
    strcpy(ch1,ch2);
    strcpy(ch2,temp);

    printf("%s\n",ch1);
    printf("%s",ch2);

    return 0;
}