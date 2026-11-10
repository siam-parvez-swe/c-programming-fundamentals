#include<stdio.h>
void mello(){
    printf("Hello World2\n");
}
void gello(){
    printf("Hello World3\n");
    mello();
}
void hello(){
    printf("Hello World4\n");
    gello();
}
int main()
{
    printf("Hello World1\n");
    hello();
    return 0;
}