#include<stdio.h>
int main()
{
    long long A, B;
    scanf("%lld %lld", &A, &B);
    if(1<=A && B<=1000000){
        if(A % B == 0 || B % A == 0){
            printf("Multiples");
        }
        else{
            printf("No Multiples");
        } 
    }
    return 0;
}