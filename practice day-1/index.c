#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(1 <= a && b <= 10000){
        if(a*2 == b || b*2 == a){
            printf("Yes");
        }
        else{
            printf("No");
        }
    }
    return 0;
}