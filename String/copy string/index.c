#include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "C Programming";
    char target[20];

    // method 1
    strcpy(target, source);
    printf("Source %s\n",source);
    printf("Target %s\n",target);
    return 0;
}