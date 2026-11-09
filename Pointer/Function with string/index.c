#include<stdio.h>
#include<string.h>
void fun(char s[10], int n){
    int len = strlen(s);
    printf("%s\n", s);
    printf("%d\n", len);
}
int main()
{
    char s[10];
    scanf("%s", s);
    fun(s, 10);
    return 0;
}