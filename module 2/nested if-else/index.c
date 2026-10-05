#include<stdio.h>
int main()
{
    int tk;
    printf("Enter any amount of money: ");
    scanf("%d", &tk);

    if(tk >= 1000)
    {
        printf("Going to Cox's Bazar \n");
        if(tk >= 2000)
        {
            printf("Going to Saint Martin \n");
        }
        else{
            printf("Going to Kuakata \n");
        }
    }
    else{
        printf("Stay home \n");
    }
    double a = 15/4;
    printf("The value of a is: %lf \n", a);
    return 0;
} 