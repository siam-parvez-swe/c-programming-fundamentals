#include<stdio.h>
int x = 10; // global variable
int sum(){
    // int x = 20; // local variable
    printf("Sum-> %d",x);
}
int main()
{
    // int x = 10; // local variable
    printf("Main-> %d\n",x);
    sum();
    return 0;
}