#include <stdio.h>

void fun(int i)
{
    if(i==50){
        return;
    }
    if (i%2==0)
    {
        printf("%d\n",i);
    }
    

    fun(i+1);
}

int main()
{
    int i = 1;
    fun(i);

    return 0;
}