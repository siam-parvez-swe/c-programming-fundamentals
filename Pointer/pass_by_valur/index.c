#include<stdio.h>
void fun(int x){
    x = 20;
    printf("Address of x fun function : %p\n", &x);        
}
int main()
{
    int x = 10;   
    fun(x);
    printf("Address of x main function : %p\n", &x);
    
    return 0;
}